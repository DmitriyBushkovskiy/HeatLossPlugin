using HeatLoss.Application;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.NanoCad.Exceptions;
using HostMgd.ApplicationServices;
using Teigha.Colors;
using Teigha.DatabaseServices;
using OpenMode = Teigha.DatabaseServices.OpenMode;

namespace HeatLoss.Infrastructure.NanoCad;

public class NanoCadValidator
{
    private readonly Color _defaultColor = Color.FromRgb(255, 0, 0);
    private readonly Document _document;
    
    public NanoCadValidator(Document document)
    {
        _document = document;
        CreateLayer(Constants.ValidationLayerName);
        DeleteLayerObjects();
    }

    public void CollectionIsNotEmpty<T>(IEnumerable<T> collection)
    {
        if (collection.Any()) return;
        var entity = typeof(T) switch
        {
            { } t when t == typeof(SpaceDto) => "помещения",
            { } t when t == typeof(LinearWallDto) => "стены",
            { } t when t == typeof(OpeningDto) => "проемы",
            { } t when t == typeof(SlabDto) => "перекрытия",
            { } t when t == typeof(CoordinateGridDto) => "сетки осей",
            _ => throw new NotImplementedException(typeof(T).Name)
        };
        throw new ValidationException($"В модели отсутствуют {entity}");
    }

    public void ValidateProjectData(ProjectDataDto projectData)
    {
        if (Math.Abs(projectData.OutsideTemperature - 100) < 1)
        {
            throw new ValidationException("Установите температуру наружного воздуха в параметрах проекта (ProjectData)");
        }
    }
    
    public void ValidateMaterials(Dictionary<string, double> materials)
    {
        var ids = new List<string>();
        foreach (var material in materials)
        {
            if (material.Value <= 0)
                ids.Add(material.Key);
        }

        if (ids.Any())
            throw new ValidationException($"Указан неверный коэффициент теплопроводности для следующих материалов: {string.Join(", ", ids)}");
    }
    
    private void CreateLayer(string layerName)
    {
        var db = _document.Database;
        var tr = db.TransactionManager.StartTransaction();
        
        var layerTable = (LayerTable)tr.GetObject(db.LayerTableId, OpenMode.ForWrite);
        
        if (!layerTable.Has(layerName))
        {
            layerTable.UpgradeOpen();

            var layer = new LayerTableRecord
            {
                Name = layerName,
                Color = _defaultColor,
                LineWeight = LineWeight.LineWeight050
            };

            layerTable.Add(layer);
            tr.AddNewlyCreatedDBObject(layer, true);
        }

        tr.Commit();
    }
    
    private void DeleteLayerObjects()
    {
        var db = _document.Database;
    
        var tr = db.TransactionManager.StartTransaction();
        
        var bt = (BlockTable)tr.GetObject(db.BlockTableId, OpenMode.ForWrite);
        var btr = (BlockTableRecord)tr.GetObject(bt[BlockTableRecord.ModelSpace], OpenMode.ForWrite);
    
        foreach (var objId in btr)
        {
            var ent = tr.GetObject(objId, OpenMode.ForWrite) as Entity;
            if (ent != null && ent.Layer == Constants.ValidationLayerName)
            {
                ent.UpgradeOpen();
                ent.Erase();
            }
        }
    
        tr.Commit();
    }
}