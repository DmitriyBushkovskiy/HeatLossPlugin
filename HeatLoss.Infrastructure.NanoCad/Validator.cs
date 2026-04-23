using HeatLoss.Domain.Enums;
using HeatLoss.Geometry;
using HeatLoss.Infrastructure.NanoCad.Extensions;
using HeatLoss.Infrastructure.NanoCad.Domain;
using HeatLoss.Infrastructure.NanoCad.Exceptions;
using HeatLoss.Infrastructure.NanoCad.RawModels;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using NetTopologySuite.Geometries;
using Teigha.Colors;
using Teigha.DatabaseServices;
using Teigha.Geometry;

namespace HeatLoss.Infrastructure.NanoCad;

public class Validator
{
    private const string LayerName = "HL_VALIDATION";
    private readonly Color _defaultColor = Color.FromRgb(255, 0, 0);
    
    private readonly Document _document;
    private readonly Editor _editor;
    private readonly HeatLossGeometry _geometry;
    
    public Validator(Document document)
    {
        _document = document;
        _editor = _document.Editor;
        _geometry = new HeatLossGeometry();
        CreateLayer(LayerName);
        DeleteLayerObjects();
    }

    public void CollectionIsNotEmpty<T>(IEnumerable<T> collection)
    {
        if (collection.Any()) return;
        var entity = typeof(T) switch
        {
            { } t when t == typeof(SpaceRawModel) => "помещения",
            { } t when t == typeof(LinearWallRawModel) => "стены",
            { } t when t == typeof(OpeningRawModel) => "проемы",
            { } t when t == typeof(SlabRawModel) => "перекрытия",
            { } t when t == typeof(CoordinateGridRawModel) => "сетки осей",
            _ => throw new NotImplementedException(typeof(T).Name)
        };
        throw new ValidationException($"В модели отсутствуют {entity}");
    }

    public void ValidateProjectData(ProjectDataModel projectData)
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
    
    public void ValidateSpaces(IEnumerable<SpaceModel> spaces)
    {
        var errorLines = new List<Line>();
        var isCorrect = true;
        foreach (var space in spaces)
        {
            var edgesWithoutWall = space.Edges.Where(e => e.ModelWall == null).ToList();
            if (edgesWithoutWall.Any())
            {
                if (isCorrect)
                {
                    _editor.WriteMessage("Найдены помещения, у которых границы не соприкасаются со стеной:");
                    isCorrect = false;
                }
                _editor.WriteMessage($"Пом. {space.Number} {space.Name}. Границ помещения без стен: {edgesWithoutWall.Count}");
                foreach (var edge in edgesWithoutWall)
                {
                    errorLines.Add(
                        new Line
                        {
                            StartPoint = new Point3d(edge.Start.X, edge.Start.Y, space.BottomLevel),
                            EndPoint = new Point3d(edge.End.X, edge.End.Y, space.BottomLevel),
                            Layer = LayerName
                        }
                    );
                }
            }
        }
        if(errorLines.Any())
            Print(errorLines);
        
        if (!isCorrect)
        {
            throw new ValidationException("Стороны помещения, которые не контактируют со стенами выделены красным");
        }
    }

    public void ValidateWalls(List<CoordinateGridRawModel> grids,  List<SpaceModel> spaces)
    {
        var isCorrect = true;
        var levels = grids.Single().AxisZ.Points.OrderBy(x => x.Position).ToList();
        for (int i = 0; i < levels.Count - 1; i++)
        {
            var floor = levels[i];
            var floorSpaces = spaces.Where(x => Math.Abs(x.BottomLevel - floor.Position) < 1 
                                                || (x.BottomLevel + x.Height > floor.Position && x.BottomLevel + x.Height <= levels[i+1].Position ))
                .ToList();
            
            if (floorSpaces.Count == 0)
                continue;
            var perimeter = _geometry.GetCommonPerimeters(floorSpaces.Select(x => x.GetPolygon()), 1000).Single();
            isCorrect = isCorrect && ValidateWallsTypesAndPositions(floorSpaces, perimeter, floor.Position);
        }
        if (!isCorrect)
            throw new ValidationException("Ошибка при проверке стен");
    }

    public void ValidateOpenings(List<OpeningModel> openings)
    {
        var invalidOpenings = new List<OpeningModel>();
        foreach (var opening in openings)
        {
            if (opening.ThermalConductivity <= 0)
            {
                invalidOpenings.Add(opening);
            }
        }

        if (invalidOpenings.Any())
        {
            _editor.WriteMessage("Найдены проемы с некорректным коэффициентом теплопроводности. Проемы выделены красным");
            foreach (var group in invalidOpenings.GroupBy(x => x.BottomLevel))
            {
                PrintPolygons(group.ToList().Select(x => x.Polygon).ToList(), level: group.Key);
            }
        }

        if (invalidOpenings.Any())
            throw new ValidationException("Ошибка при проверке проемов");
    }

    private bool ValidateWallsTypesAndPositions(List<SpaceModel> spaces, Polygon perimeter, double level)
    {
        var isCorrect = true;
        
        foreach (var space in spaces)
        {
            foreach (var edge in space.Edges)
            {
                if (!edge.Walls.Any())
                {
                    isCorrect = false;
                    // Для наружных стен здания стоит свойство, что они внутренние
                    var line = edge.LineString.ToLine(double.IsNaN(edge.Start.Z) ? 0 : edge.Start.Z);
                    line.Layer = LayerName;
                    Print(new []{line});
                }
                foreach (var wall in edge.Walls)
                {
                    // Для внутренних стен здания стоит свойство, что они наружные
                    if (wall.Position == SurfacePosition.Outside && perimeter.Contains(wall.Polygon))
                    {
                        PrintPolygons(new []{wall.Polygon}, level: wall.BottomLevel);
                    }
                }
            }
        }

        if (!isCorrect)
        {
            PrintPolygons(new []{perimeter}, color: Color.FromRgb(0, 0, 255), level: level);
            _editor.WriteMessage("\nНайдены стены с неверными настройками расположения (внутрення/наружная)\nКрасным показаны стены или стороны помещения, синим - внешний периметр этажа");
        }

        return isCorrect;
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
            if (ent != null && ent.Layer == LayerName)
            {
                ent.UpgradeOpen();
                ent.Erase();
            }
        }
    
        tr.Commit();
    }
    
    private void Print(IEnumerable<Entity> geometries)
    {
        var document = Application.DocumentManager.MdiActiveDocument;
        var db = document.Database;
        var tr = db.TransactionManager.StartTransaction();
        
        var bt = (BlockTable)tr.GetObject(db.BlockTableId, OpenMode.ForRead);
        var btr = (BlockTableRecord)tr.GetObject(bt[BlockTableRecord.ModelSpace], OpenMode.ForWrite);

        foreach (var geometry in geometries)
        {
            switch (geometry)
            {
                case Line line:
                    btr.AppendEntity(line);
                    tr.AddNewlyCreatedDBObject(line, true);
                    break;

                default:
                    throw new Exception();
            }
        }
        
        tr.Commit();
    }

    private void PrintPolygons(IEnumerable<Polygon> polygons, Color? color = null, double level = 0)
    {
        var buildingPerimeterCoordinates = polygons.Select(x => x.ExteriorRing.Coordinates);
        var lines = new List<Line>();
        foreach (var resCoordinates in buildingPerimeterCoordinates)
        {
            for (int i = 0; i < resCoordinates.Length - 1; i++)
            {
                var currPoint = resCoordinates[i];
                var nextPoint = resCoordinates[i + 1];
                lines.Add(
                    new Line
                    {
                        StartPoint = new Point3d(currPoint.X, currPoint.Y, level),
                        EndPoint = new Point3d(nextPoint.X, nextPoint.Y, level),
                        Layer = LayerName,
                        Color =  color ?? _defaultColor,
                    });
            }
        }
        Print(lines);
    }
}