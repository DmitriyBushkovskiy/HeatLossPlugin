using System.Globalization;
using BIMStructureMgd.Common;
using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.Infrastructure.NanoCad.Extensions;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Results;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Geometry;
using HeatLoss.Infrastructure.NanoCad.Domain;
using HeatLoss.Infrastructure.NanoCad.Objects;
using HeatLoss.Infrastructure.NanoCad.RawModels;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using NetTopologySuite.Geometries;
using NetTopologySuite.Mathematics;
using NetTopologySuite.Operation.Union;
using ParametricKit.Tree;
using ParametricKit.Tree.Eval;
using Teigha.DatabaseServices;
using Teigha.Runtime;
using Utilities = BIMStructureMgd.Common.Utilities;

namespace HeatLoss.Infrastructure.NanoCad;

public class BuildingProvider
{
    private readonly Document _document;
    private readonly Editor _editor;
    private readonly HeatLossGeometry _geometry;

    private readonly Validator _validator;
    private readonly Extractor _extractor;

    public BuildingProvider()
    {
        _document = Application.DocumentManager.MdiActiveDocument;
        _editor = _document.Editor;
        _geometry = new HeatLossGeometry();
        _validator = new Validator(_document);
        _extractor = new Extractor(_document, _validator);
    }

    public Building GetBuildingInfo()
    {
        var rawData = _extractor.ExtractData();

        var transformer = new BuildingModelBuilder(_validator, _geometry);

        var building = transformer.Build(rawData);
        
        return new Building(building.OutsideTemperature, building.Spaces.Select(x => x.ToSpace()).ToList());
    }

    public void SetHeatLossToModel(BuildingHeatLossResult heatLossResult)
    {
        _extractor.SetHeatLossToModel(heatLossResult);
    }
}

public class Extractor
{
    private readonly Document _document;
    private readonly Editor _editor;
    private readonly Validator _validator;
    
    public Extractor(Document document, Validator validator)
    {
        _document = document;
        _editor = _document.Editor;
        _validator = validator;
    }
    
    public NanoCadExtractedData ExtractData()
    {
        var nanocadSpaces = FindObjects<SpaceEntity, SpaceRawModel>(x => new SpaceRawModel(x));
        var nanocadWalls = FindObjects<LinearBuildingWall, LinearWallRawModel>(x => new LinearWallRawModel(x));
        var nanocadOpenings = FindObjects<BuildingOpening, OpeningRawModel>(x => new OpeningRawModel(x));
        var nanocadGrids = FindObjects<CoordinateGridRef, CoordinateGridRawModel>(x => new CoordinateGridRawModel(x));
        var nanocadSlabs = FindObjects<BuildingSlab, SlabRawModel>(x => new SlabRawModel(x));
        
        _validator.CollectionIsNotEmpty(nanocadSpaces);
        _validator.CollectionIsNotEmpty(nanocadWalls);
        _validator.CollectionIsNotEmpty(nanocadOpenings);
        _validator.CollectionIsNotEmpty(nanocadSlabs);
        _validator.CollectionIsNotEmpty(nanocadGrids);
        
        var nanocadProjectData = GetProjectData();
        var projectData = new ProjectDataModel
        {
            OutsideTemperature = double.Parse(nanocadProjectData!.GetParameter("HL_OUTSIDE_TEMPERATURE"), NumberStyles.Any, CultureInfo.InvariantCulture),
            FirstFloorAreaThermalConductivity = double.Parse(nanocadProjectData!.GetParameter("HL_FLOOR_AREA1_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
            SecondFloorAreaThermalConductivity = double.Parse(nanocadProjectData!.GetParameter("HL_FLOOR_AREA2_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
            ThirdFloorAreaThermalConductivity = double.Parse(nanocadProjectData!.GetParameter("HL_FLOOR_AREA3_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
            FourthFloorAreaThermalConductivity = double.Parse(nanocadProjectData!.GetParameter("HL_FLOOR_AREA4_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
        };
        
        _validator.ValidateProjectData(projectData);

        // определяем положение сторон света
        var cardinalDirections = new Dictionary<CardinalDirection, Vector2D>
        {
            [CardinalDirection.N] = new (new Coordinate(nanocadProjectData!.YDir.X, nanocadProjectData.YDir.Y))
        };
        for (int i = 1; i < 8; i++)
        {
            cardinalDirections[(CardinalDirection)i] = cardinalDirections[(CardinalDirection)(i - 1)].Rotate(- Math.PI / 4);
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
        
        _validator.ValidateMaterials(materialsThermalConductivity);

        return new NanoCadExtractedData(
            nanocadSpaces, 
            nanocadWalls,
            nanocadOpenings,
            nanocadGrids, 
            nanocadSlabs, 
            materialsThermalConductivity, 
            cardinalDirections, 
            projectData);
    }
    
    public void SetHeatLossToModel(BuildingHeatLossResult heatLossResult)
    {
        var db = _document.Database;
        
        var tr = db.TransactionManager.StartTransaction();
        var filter = new SelectionFilter(new[] {
            new TypedValue((int)DxfCode.Start, RXObject.GetClass(typeof(SpaceEntity)).DxfName)
        });
        var promptResult = _editor.SelectAll(filter);
        
        var selectionSet = promptResult.Status == PromptStatus.OK ? promptResult.Value : null;
        
        if (selectionSet == null || selectionSet.Count < 1)
            selectionSet = new SelectionSet();
        
        foreach (SelectedObject selectedObject in selectionSet)
        {
            var dbObject = tr.GetObject(selectedObject.ObjectId, OpenMode.ForWrite);
            if (dbObject is SpaceEntity res)
            {
                var spaceHeatLossResult = heatLossResult.Spaces.FirstOrDefault(x => x.Number == res.Number && x.Name == res.Name);
                if (spaceHeatLossResult != null)
                {
                    res.GetElementData().SetParameter("HL_HEAT_LOSS", spaceHeatLossResult.TotalHeatLoss);
                    //TODO: параметр HL_HEAT_LOSS добавляется к помещениям вручную
                }
            }
        }
        tr.Commit();
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

public class BuildingModelBuilder
{
    private readonly Validator _validator;
    private readonly HeatLossGeometry _geometry;
    
    public BuildingModelBuilder(
        Validator validator, 
        HeatLossGeometry geometry)
    {
        _validator = validator;
        _geometry = geometry;
    }

    public BuildingModel Build(NanoCadExtractedData rawData)
    {
        var nanocadSpaces = rawData.NanocadSpaces;
        var nanocadWalls = rawData.NanocadWalls;
        var nanocadOpenings = rawData.NanocadOpenings;
        var nanocadGrids = rawData.NanocadGrids;
        var nanocadSlabs = rawData.NanocadSlabs;
        var materialsThermalConductivity = rawData.MaterialsThermalConductivity;
        var cardinalDirections = rawData.CardinalDirections;
        var projectData = rawData.ProjectData;
        
        var spaces = CreateSpaces(nanocadSpaces, nanocadWalls, nanocadOpenings);
        
        MoveSpaceInsideEdges(spaces);

        CreateWalls(spaces, nanocadGrids, materialsThermalConductivity, cardinalDirections);

        CreateOpenings(spaces, cardinalDirections);

        CreateFloorAreas(spaces, nanocadGrids, projectData);

        CreateCeilings(spaces, nanocadGrids, nanocadSlabs, materialsThermalConductivity);
        
        return new BuildingModel(projectData.OutsideTemperature, spaces);
    }

    private List<SpaceModel> CreateSpaces(List<SpaceRawModel> nanocadSpaces, List<LinearWallRawModel> nanocadWalls, List<OpeningRawModel> nanocadOpenings)
    {
        var spaces = new List<SpaceModel>();
        foreach (var nanocadSpace in nanocadSpaces)
        {
            // создаем помещение
            var space = nanocadSpace.ToSpaceModel();
            var spaceCoordinates = nanocadSpace.Coordinates;
            for (int i = 0; i < spaceCoordinates.Count; i++)
            {
                var currentCoordinate = spaceCoordinates[i];
                var nextCoordinate = spaceCoordinates[i == spaceCoordinates.Count - 1 ? 0 : i + 1];
                
                // создаем сторону помещения
                var spaceEdge = new SpaceEdgeModel(currentCoordinate, nextCoordinate);
                
                var possibleWalls = nanocadWalls
                    .Where(w => space.HaveVerticalIntersection(w))
                    .ToList();
                // находим стену, которой принадлежит граница помещения
                foreach (var nanocadWall in possibleWalls)
                {
                    var intersection = nanocadWall.GetPolygon().Intersection(spaceEdge.LineString);    
                    // проверяем что есть пересечение, и это не пересечение с торцом стены
                    if (Math.Round(intersection.Length) > 0 && Math.Abs(nanocadWall.Thickness - intersection.Length) > 1) 
                    {
                        spaceEdge.ModelWall = nanocadWall;
                    }
                }
                
                // находим проемы, которые находятся на границе помещения
                var possibleOpenings = nanocadOpenings
                    .Where(o => space.IsOpeningBelong(o))
                    .ToList();
                
                foreach (var nanocadOpening in possibleOpenings)
                {
                    var intersection = nanocadOpening.GetPolygon().Intersection(spaceEdge.LineString);    
                    if (Math.Round(intersection.Length) > 0) 
                    {
                        spaceEdge.ModelOpenings.Add(nanocadOpening);
                    }
                }
                space.Edges.Add(spaceEdge);
            }
            spaces.Add(space);
        }
        _validator.ValidateSpaces(spaces);
        return spaces;
    }
    
    /// <summary>
    /// Сдвиг внутренних граней помещения до середины внутренней стены
    /// </summary>
    private void MoveSpaceInsideEdges(List<SpaceModel> spaces)
    {
        foreach (var space in spaces)
        {
            var spaceEdges = space.Edges;
            for (int i = 0; i < spaceEdges.Count; i++)
            {
                var currentEdge = spaceEdges[i];
                if (currentEdge.ModelWall!.Position == SurfacePosition.Inside) //TODO:: реализовать для нескольких стен, в т.ч. разных
                {
                    var previousEdge = spaceEdges[i == 0 ? spaceEdges.Count - 1 : i - 1];
                    var nextEdge = spaceEdges[i == spaceEdges.Count - 1 ? 0 : i + 1];
                    var offset = - currentEdge.ModelWall!.Thickness / 2;

                    var newLine = _geometry.MoveLine(currentEdge.LineString, offset);
                    
                    // новые точки пересечения
                    var newIntersectionStartPoint = _geometry.FindIntersectionPoint(newLine, previousEdge.LineString);
                    var newIntersectionEndPoint = _geometry.FindIntersectionPoint(newLine, nextEdge.LineString);
                    
                    // меняем координаты отрезков
                    previousEdge.ChangeCoordinates(previousEdge.Start, newIntersectionStartPoint);
                    nextEdge.ChangeCoordinates(newIntersectionEndPoint, nextEdge.End);
                    currentEdge.ChangeCoordinates(newIntersectionStartPoint, newIntersectionEndPoint);
                }
            }
        }
    }
    
    /// <summary>
    /// Создание участка стены для помещения
    /// </summary>
    private void CreateWalls(List<SpaceModel> spaces, List<CoordinateGridRawModel> nanocadGrids, Dictionary<string, double> materialsThermalConductivity, Dictionary<CardinalDirection, Vector2D> cardinalDirections)
    {
        foreach (var space in spaces)
        {
            for (var i = 0; i < space.Edges.Count; i++)
            {
                var edge = space.Edges[i];
                var modelWall = edge.ModelWall!;
                if (modelWall.Position == SurfacePosition.Outside)
                {
                    var prevEdge = space.Edges[i == 0 ? space.Edges.Count - 1 : i - 1];
                    var nextEdge = space.Edges[i == space.Edges.Count - 1 ? 0 : i + 1];
                    var wall = new WallModel
                    {
                        Id = modelWall.Id,
                        Mark = modelWall.GetParameter("BUILD_MATERIAL_ID"),
                        Position = modelWall.Position,
                        Thickness = modelWall.Thickness,
                        Polygon = CreateWallPolygon(edge.LineString, modelWall.Thickness, 0),
                        Width = edge.LineString.Length + prevEdge.ModelWall!.GetWallThickness() + nextEdge.ModelWall!.GetWallThickness(),
                        Height = space.Height,
                        BottomLevel = space.BottomLevel,
                        ThermalConductivity = materialsThermalConductivity[modelWall.GetParameter(Parameter.Names.BuildMaterialId)],
                        CardinalDirection = GetCardinalDirection(cardinalDirections, edge.LineString, modelWall.GetPolygon())
                    };
                    edge.Walls.Add(wall);
                }
                else if (modelWall.Position == SurfacePosition.Inside)
                {
                    // получаем помещения, которые контактируют с той же стеной 
                    var connectedSpaces = spaces
                        .Where(s => s.Edges.Any(e => e.ModelWall!.Id == modelWall.Id)
                        && s.HaveVerticalIntersection(space))
                        .ToList();
                    foreach (var anotherSpace in connectedSpaces)
                    {
                        // ищем пересечения с другими границами, которые контактируют с той же стеной
                        foreach (var anotherEdge in anotherSpace.Edges)
                        {
                            var intersection = edge.LineString.Intersection(anotherEdge.LineString);
                            if (!intersection.IsEmpty && space.Id != anotherSpace.Id)
                            {
                                if (intersection is LineString ls)
                                {
                                    var wall = new WallModel
                                    {
                                        Mark = modelWall.GetParameter("BUILD_MATERIAL_ID"),
                                        Position = modelWall.Position,
                                        Thickness = modelWall.Thickness,
                                        Polygon = CreateWallPolygon(ls, modelWall.Thickness / 2, modelWall.Thickness / 2),
                                        AdjacentSpace = anotherSpace,
                                        Width = intersection.Length,
                                        Height = space.GetVerticalIntersectionLenght(anotherSpace),
                                        BottomLevel = space.GetVerticalIntersectionLevels(anotherSpace).bottom,
                                        ThermalConductivity = materialsThermalConductivity[modelWall.GetParameter(Parameter.Names.BuildMaterialId)]
                                    };
                                    edge.Walls.Add(wall);
                                }
                            }
                        }
                    }
                }
                else
                    throw new NotImplementedException(); // TODO: remove?
            }
        }
        
        _validator.ValidateWalls(nanocadGrids, spaces);
    }
    
    private void CreateOpenings(List<SpaceModel> spaces, Dictionary<CardinalDirection, Vector2D> cardinalDirections)
    {
        foreach (var space in spaces)
        {
            foreach (var edge in space.Edges)
            {
                foreach (var wall in edge.Walls)
                {
                    var possibleOpenings = edge.ModelOpenings 
                        .Where(o => wall.IsOpeningBelong(o))
                        .ToList();
                    foreach (var opening in possibleOpenings)
                    {
                        var intersection = wall.Polygon.Intersection(opening.GetPolygon());
                        if (!intersection.IsEmpty)
                        {
                            wall.Openings.Add(new OpeningModel
                            {
                                Id = Guid.NewGuid(),
                                Polygon = opening.GetPolygon(),
                                Name = opening.Name,
                                Width = opening.Width,
                                Height = opening.Height,
                                BottomLevel = opening.BasePoint.Z,
                                ThermalConductivity = double.TryParse(opening.GetParameter("BUILD_THERMAL_CONDUCTIVITY"),  NumberStyles.Any , CultureInfo.InvariantCulture,out var value) ? value : 0,
                                Type = opening.Type,
                                Mark = opening.GetParameter("BOM_MARK"),
                                CardinalDirection = wall.Position == SurfacePosition.Outside ? GetCardinalDirection(cardinalDirections, edge.LineString, opening.GetPolygon()) : null
                            });
                        }
                    }
                }
            }
        }

        _validator.ValidateOpenings(spaces.SelectMany(x => x.Edges).SelectMany(x => x.Walls).SelectMany(x => x.Openings).ToList());
    }
    
    private void CreateFloorAreas(List<SpaceModel> spaces, List<CoordinateGridRawModel> nanocadGrids, ProjectDataModel projectData)
    {
        var fistFloor = nanocadGrids.Single().AxisZ.Points.OrderBy(x => x.Position).First(); //TODO: что если несколько сеток осей?
        var firstFloorSpaces = spaces.Where(x => Math.Abs(x.BottomLevel - fistFloor.Position) < 1).ToList();
        var firstFloorGeometry = _geometry.GetCommonPerimeters(firstFloorSpaces.Select(x => x.GetPolygon()), 1000).ToList();
        var secondFloorGeometry = _geometry.CreatePolygonsWithOffset(firstFloorGeometry, -2000);
        var thirdFloorGeometry = _geometry.CreatePolygonsWithOffset(secondFloorGeometry, -2000);
        var fourthFloorGeometry = _geometry.CreatePolygonsWithOffset(thirdFloorGeometry, -2000);

        var fourthArea = UnaryUnionOp.Union(fourthFloorGeometry);
        var thirdArea = UnaryUnionOp.Union(thirdFloorGeometry);
        var secondArea = UnaryUnionOp.Union(secondFloorGeometry);
        var firstArea = UnaryUnionOp.Union(firstFloorGeometry);
        
        foreach (var space in firstFloorSpaces)
        {
            var floor = new FloorModel();
            var spacePolygon = UnaryUnionOp.Union(space.GetPolygon());
            if (fourthArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaModel
                {
                    FloorAreaNumber = FloorAreaNumber.Fourth,
                    Area = Math.Round(fourthArea.Intersection(spacePolygon).Area/1000000, 2),
                    ThermalConductivity = projectData.FourthFloorAreaThermalConductivity
                });
            }
            if (thirdArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaModel
                {
                    FloorAreaNumber = FloorAreaNumber.Third,
                    Area = Math.Round(thirdArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = projectData.ThirdFloorAreaThermalConductivity
                });
            }
            if (secondArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaModel
                {
                    FloorAreaNumber = FloorAreaNumber.Second,
                    Area = Math.Round(secondArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = projectData.SecondFloorAreaThermalConductivity
                });
            }
            if (firstArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaModel
                {
                    FloorAreaNumber = FloorAreaNumber.First,
                    Area = Math.Round(firstArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = projectData.FirstFloorAreaThermalConductivity
                });
            }
            space.Floor = floor;
        }
    }

    private void CreateCeilings(List<SpaceModel> spaces, List<CoordinateGridRawModel> nanocadGrids, List<SlabRawModel> nanocadSlabs, Dictionary<string, double> materialsThermalConductivity)
    {
        var spacesByBottom = spaces.GroupBy(x => x.BottomLevel).ToDictionary(x => x.Key, x => x.ToList());
        var spacesByTop = spaces.GroupBy(x => x.BottomLevel + x.Height).ToDictionary(x => x.Key, x => x.ToList());
        var slabs = nanocadGrids.Single().AxisZ.Points
            .OrderBy(x => x.Position)
            .ToDictionary(g => g.Position, g => nanocadSlabs.Where(x => Math.Abs(x.BasePoint.Z - g.Position) < 1).ToArray());

        foreach (var currentSpace in spaces)
        {
            spacesByTop.TryGetValue(currentSpace.BottomLevel, out var bottomSpaces);
            spacesByBottom.TryGetValue(currentSpace.BottomLevel + currentSpace.Height, out var topSpaces);

            var bottomSlabs = slabs[currentSpace.BottomLevel];
            var topSlabs = slabs[currentSpace.BottomLevel + currentSpace.Height];
            
            var levels = new[]
            {
                (bottomSpaces, bottomSlabs, false),
                (topSpaces, topSlabs, true)
            };
            
            foreach (var level in levels)
            {
                var anotherSpaces = level.Item1 ?? new List<SpaceModel>();
                var anotherSlabs = level.Item2;
                var isTop = level.Item3;
            
                foreach (var anotherSpace in anotherSpaces)
                {
                    var floorIntersection = currentSpace.GetPolygon()
                        .Intersection(anotherSpace.GetPolygon());
                    if (!floorIntersection.IsEmpty && floorIntersection.Area > 0)
                    {
                        foreach (var slab in anotherSlabs)
                        {
                            var slabIntersection = floorIntersection.Intersection(slab.GetPolygon());
                            if (!slabIntersection.IsEmpty && slabIntersection.Area > 0)
                            {
                                var ceiling = new CeilingModel
                                {
                                    Space = anotherSpace,
                                    Area = Math.Round(floorIntersection.Area / 1_000_000, 2),
                                    Position = SurfacePosition.Inside,
                                    Slab = slab,
                                    ThermalConductivity = materialsThermalConductivity[slab.GetParameter(Parameter.Names.BuildMaterialId)],
                                };
                                currentSpace.Ceiling.Add(ceiling);
                            }
                        }
                    }
                }

                // Внешние перекрытия
                if (anotherSpaces.Count == 0 && isTop)
                {
                    foreach (var slab in anotherSlabs)
                    {
                        var slabIntersection = currentSpace.GetPolygon().Intersection(slab.GetPolygon());
                        if (!slabIntersection.IsEmpty && slabIntersection.Area > 0)
                        {
                            var topCeiling = new CeilingModel
                            {
                                Area = Math.Round(currentSpace.GetPolygon().Area / 1_000_000, 2),
                                Position = SurfacePosition.Outside,
                                Slab = slab,
                                ThermalConductivity = materialsThermalConductivity[slab.GetParameter(Parameter.Names.BuildMaterialId)],
                            };
                            currentSpace.Ceiling.Add(topCeiling);
                        }
                    }
                }
            }
        }
    }
    
    /// <summary>
    /// Создание полигона для фактического участка стены помещения
    /// </summary>
    private Polygon CreateWallPolygon(LineString baseLine, double internalOffset, double externalOffset)
        => _geometry.CreatePolygonByLine(baseLine, internalOffset, externalOffset);
    
    /// <summary>
    /// Получение стороны света ограждающей конструкции
    /// </summary>
    private CardinalDirection GetCardinalDirection(Dictionary<CardinalDirection, Vector2D> cardinalDirections, LineString spaceEdge, Polygon surfacePolygon)
    {
        var vect = _geometry.GetInnerPerpendicular(surfacePolygon, spaceEdge);
        
        var minAngle = Math.PI;
        var cardinalDirection = CardinalDirection.N;
        foreach (var pair in cardinalDirections)
        {
            var r = Math.Abs(vect.AngleTo(pair.Value));
            if (r < minAngle)
            {
                minAngle = r;
                cardinalDirection = pair.Key;
            }
        }
        return cardinalDirection;
    }
}

public class NanoCadExtractedData
{
    public List<SpaceRawModel> NanocadSpaces { get; }
    public List<LinearWallRawModel> NanocadWalls { get; }
    public List<OpeningRawModel> NanocadOpenings { get; }
    public List<CoordinateGridRawModel> NanocadGrids { get; }
    public List<SlabRawModel> NanocadSlabs { get; }
    public Dictionary<string, double> MaterialsThermalConductivity { get; }
    public Dictionary<CardinalDirection, Vector2D> CardinalDirections { get; }
    public ProjectDataModel ProjectData { get; }

    public NanoCadExtractedData(
        List<SpaceRawModel> nanocadSpaces,
        List<LinearWallRawModel> nanocadWalls,
        List<OpeningRawModel> nanocadOpenings,
        List<CoordinateGridRawModel> nanocadGrids,
        List<SlabRawModel> nanocadSlabs,
        Dictionary<string, double> materialsThermalConductivity,
        Dictionary<CardinalDirection, Vector2D> cardinalDirections,
        ProjectDataModel projectData)
    {
        NanocadSpaces = nanocadSpaces;
        NanocadWalls =  nanocadWalls;
        NanocadOpenings = nanocadOpenings;
        NanocadGrids = nanocadGrids;
        NanocadSlabs = nanocadSlabs;
        MaterialsThermalConductivity = materialsThermalConductivity;
        CardinalDirections = cardinalDirections;
        ProjectData = projectData;
    }
}