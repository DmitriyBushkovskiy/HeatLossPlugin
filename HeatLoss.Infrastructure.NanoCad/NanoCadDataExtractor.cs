using System.Globalization;
using BIMStructureMgd.Common;
using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Infrastructure.NanoCad.Extensions;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Results;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;
using HeatLoss.Infrastructure.NanoCad.Objects;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using ParametricKit.Tree;
using ParametricKit.Tree.Eval;
using Teigha.DatabaseServices;
using Teigha.Runtime;
using Parameter = BIMStructureMgd.ObjectProperties.Parameter;
using Utilities = BIMStructureMgd.Common.Utilities;

namespace HeatLoss.Infrastructure.NanoCad;

public class Extractor
{
    private readonly Document _document;
    private readonly Editor _editor;
    private readonly NanoCadValidator _nanoCadValidator;
    private readonly Mapper _mapper;
    
    public Extractor(Document document, NanoCadValidator nanoCadValidator)
    {
        _document = document;
        _editor = _document.Editor;
        _nanoCadValidator = nanoCadValidator;
        _mapper = new Mapper();
    }
    
    public BimExtractedData ExtractData()
    {
        var nanocadSpaces = FindObjects<SpaceEntity, SpaceDto>(x => _mapper.ToSpaceDto(x));
        var nanocadWalls = FindObjects<LinearBuildingWall, LinearWallDto>(x => _mapper.ToWallDto(x));
        var nanocadOpenings = FindObjects<BuildingOpening, OpeningDto>(x => _mapper.ToOpeningDto(x));
        var nanocadGrids = FindObjects<CoordinateGridRef, CoordinateGridDto>(x => _mapper.ToCoordinateGridDto(x));
        var nanocadSlabs = FindObjects<BuildingSlab, SlabDto>(x => _mapper.ToSlabDto(x));
        
        _nanoCadValidator.CollectionIsNotEmpty(nanocadSpaces);
        _nanoCadValidator.CollectionIsNotEmpty(nanocadWalls);
        _nanoCadValidator.CollectionIsNotEmpty(nanocadOpenings);
        _nanoCadValidator.CollectionIsNotEmpty(nanocadSlabs);
        _nanoCadValidator.CollectionIsNotEmpty(nanocadGrids);

        var nanocadProjectData = GetProjectData();
        var projectData = _mapper.ToProjectDataDto(nanocadProjectData);
        _nanoCadValidator.ValidateProjectData(projectData);

        // определяем положение сторон света
        var cardinalDirections = new Dictionary<CardinalDirection, Vector2D>
        {
            [CardinalDirection.N] = new (nanocadProjectData.YDir.X, nanocadProjectData.YDir.Y)
        };
        for (int i = 1; i < 8; i++)
        {
            cardinalDirections[(CardinalDirection)i] = cardinalDirections[(CardinalDirection)(i - 1)].Rotate(- (float)Math.PI / 4);
        }
        
        // Ищем используемые в проекте материалы
        var materialLibrary = ProjectMaterialLibrary.Current;

        var surfaces = new List<IParametric>();
        surfaces.AddRange(nanocadSlabs);
        surfaces.AddRange(nanocadWalls);
        
         var materialsThermalConductivity = new Dictionary<string, double>();
        foreach (var surface in surfaces)
        {
            var materialId = surface.GetParameter(Parameter.Names.BuildMaterialId);
            if (materialId != string.Empty && !materialsThermalConductivity.ContainsKey(materialId))
            {
                var material = materialLibrary.GetMaterialById(materialId);
                var thermalConductivity = material.GetParameter("BUILD_THERMAL_CONDUCTIVITY");
                materialsThermalConductivity[materialId] = double.TryParse(thermalConductivity, NumberStyles.Any , CultureInfo.InvariantCulture, out var result) ? result : 0.0 ;
            }
        }
        
        _nanoCadValidator.ValidateMaterials(materialsThermalConductivity);

        return new BimExtractedData(
            nanocadSpaces, 
            nanocadWalls,
            nanocadOpenings,
            nanocadGrids, 
            nanocadSlabs, 
            materialsThermalConductivity, 
            cardinalDirections, 
            projectData);
    }

    private List<TModel> FindObjects<TEntity, TModel>(Func<TEntity, TModel> map)
        where TEntity : Entity
    {
        var result = new List<TModel>();
        var db = _document.Database;

        using (var tr = db.TransactionManager.StartTransaction())
        {
            var filter = new SelectionFilter(new[]
            {
                new TypedValue((int)DxfCode.Start, RXObject.GetClass(typeof(TEntity)).DxfName)
            });

            var promptResult = _editor.SelectAll(filter);
            var selectionSet = promptResult.Status == PromptStatus.OK 
                ? promptResult.Value 
                : new SelectionSet();

            foreach (SelectedObject selectedObject in selectionSet)
            {
                var dbObject = tr.GetObject(selectedObject.ObjectId, OpenMode.ForRead);
            
                if (dbObject is TEntity entity)
                    result.Add(map(entity));
            }
            tr.Commit();
        }
        return result;
    }

    private ParametricEntity GetProjectData()
    {
        var projectData = FindProjectData();
        if (projectData != null)
            return projectData;
        CreateProjectData();
        return FindProjectData()!;
    }

    private void CreateProjectData()
    {
        var db = _document.Database;
    
        var tr = db.TransactionManager.StartTransaction();

        var projectData = new ProjectDataObject(new ProjectDataSpecification());
        var collector = new Collector();
        var tree = collector.Collect(projectData);
        
        var parametricEntityConverter = new TreeToParametricEntityConverter();
        var box = parametricEntityConverter.Convert(tree);
        
        box.UpdateElements();
        box.ReCalculateParametric(ViewMode.Plan2D);
        
        Utilities.AddEntityToDatabase(db, tr, box);
        
        tr.Commit();
    }
    
    private ParametricEntity? FindProjectData()
    {
        var editor = _document.Editor;
        var db = _document.Database;
    
        var tr = db.TransactionManager.StartTransaction();

        var promptResult = editor.SelectAll();
    
        var selectionSet = promptResult.Status == PromptStatus.OK ? promptResult.Value : null;
    
        if (selectionSet == null || selectionSet.Count < 1)
            selectionSet = new SelectionSet();

        var result = new List<ParametricEntity>();
        
        foreach (SelectedObject selectedObject in selectionSet)
        {
            var dbObject = tr.GetObject(selectedObject.ObjectId, OpenMode.ForRead);
            if (dbObject is ParametricEntity res && res.Name == "ProjectData")
                result.Add(res);
        }
        
        tr.Commit();
        return result.FirstOrDefault();
    }
}