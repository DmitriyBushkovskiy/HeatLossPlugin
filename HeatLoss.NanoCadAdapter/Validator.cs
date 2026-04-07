// using BIMStructureMgd.DatabaseObjects;
// using HeatLoss.Domain.Enums;
// using HeatLoss.NanoCadAdapter.DTO;
// using HeatLoss.NanoCadAdapter.Exceptions;
// using HostMgd.ApplicationServices;
// using HostMgd.EditorInput;
// using NetTopologySuite.Geometries;
// using Teigha.Colors;
// using Teigha.DatabaseServices;
// using Teigha.Geometry;
// using Teigha.GraphicsInterface;
//
// namespace HeatLoss.NanoCadAdapter;
//
// public class Validator
// {
//     private const string LayerName = "HL_VALIDATION";
//     private readonly Color _defaultColor = Color.FromRgb(255, 0, 0);
//     
//     private readonly Document _document;
//     private readonly Editor _editor;
//     
//     public Validator()
//     {
//         _document = Application.DocumentManager.MdiActiveDocument;
//         _editor = _document.Editor;
//         CreateLayer(LayerName);
//         // DeleteLayerObjects();
//     }
//
//     public void CollectionIsNotEmpty<T>(IEnumerable<T> collection)
//     {
//         if (collection.Any()) return;
//         var entity = typeof(T) switch
//         {
//             { } t when t == typeof(SpaceEntity) => "помещения",
//             { } t when t == typeof(LinearBuildingWall) => "стены",
//             { } t when t == typeof(BuildingOpening) => "проемы",
//             { } t when t == typeof(BuildingSlab) => "перекрытия",
//             { } t when t == typeof(CoordinateGridRef) => "сетки осей",
//             _ => throw new NotImplementedException(typeof(T).Name)
//         };
//         throw new ValidationException($"В модели отсутствуют {entity}");
//     }
//
//     public void ValidateProjectData(ProjectDataDto projectData)
//     {
//         if (Math.Abs(projectData.OutsideTemperature - 100) < 1)
//         {
//             throw new ValidationException("Установите температуру наружного воздуха в параметрах проекта (ProjectData)");
//         }
//     }
//     
//     public void ValidateMaterials(Dictionary<string, double> materials)
//     {
//         var ids = new List<string>();
//         foreach (var material in materials)
//         {
//             if (material.Value <= 0)
//                 ids.Add(material.Key);
//         }
//
//         if (ids.Any())
//             throw new ValidationException($"Указан неверный коэффициент теплопроводности для следующих материалов: {string.Join(", ", ids)}");
//     }
//     
//     public void ValidateSpaces(IEnumerable<SpaceDto> spaces)
//     {
//         var isCorrect = true;
//         foreach (var space in spaces)
//         {
//             var edgesWithoutWall = space.Edges.Where(e => e.ModelWall == null).ToList();
//             if (edgesWithoutWall.Any())
//             {
//                 if (isCorrect)
//                 {
//                     _editor.WriteMessage("Найдены помещения, у которых границы не соприкасаются со стеной:");
//                     isCorrect = false;
//                 }
//                 _editor.WriteMessage($"Пом. {space.Number} {space.Name}. Границ помещения без стен: {edgesWithoutWall.Count}");
//                 foreach (var edge in edgesWithoutWall)
//                 {
//                     Print(new []
//                     {
//                         new Line
//                         {
//                             StartPoint = new Point3d(edge.Start.X, edge.Start.Y, space.BottomLevel),
//                             EndPoint = new Point3d(edge.End.X, edge.End.Y, space.BottomLevel),
//                             Layer = LayerName
//                         }
//                     });
//                 }
//             }
//         }
//         if (!isCorrect)
//         {
//             throw new ValidationException("Каждая сторона помещения должна контактировать со стеной");
//         }
//     }
//
//     public void ValidateWallsTypesAndPositions(List<SpaceDto> spaces, Polygon perimeter, double level)
//     {
//         var isCorrect = true;
//         
//         foreach (var space in spaces)
//         {
//             foreach (var edge in space.Edges)
//             {
//                 foreach (var wall in edge.Walls)
//                 {
//                     if ((wall.Position == SurfacePosition.Outside && perimeter.Contains(wall.Polygon)) ||
//                         (wall.Position == SurfacePosition.Inside && !perimeter.Contains(wall.Polygon)))
//                     {
//                         PrintPolygons(new []{wall.Polygon}, level: wall.BottomLevel);
//                     }
//                 }
//             }
//         }
//         if (!isCorrect)
//             PrintPolygons(new []{perimeter}, color: Color.FromRgb(0, 0, 255), level: level);
//     }
//
//     private void CreateLayer(string layerName)
//     {
//         var doc = Application.DocumentManager.MdiActiveDocument;
//         var db = doc.Database;
//
//         var tr = db.TransactionManager.StartTransaction();
//         
//         var layerTable = (LayerTable)tr.GetObject(db.LayerTableId, OpenMode.ForWrite);
//         
//         if (!layerTable.Has(layerName))
//         {
//             layerTable.UpgradeOpen();
//
//             var layer = new LayerTableRecord
//             {
//                 Name = layerName,
//                 Color = _defaultColor,
//                 LineWeight = LineWeight.LineWeight050
//             };
//
//             layerTable.Add(layer);
//             tr.AddNewlyCreatedDBObject(layer, true);
//         }
//
//         tr.Commit();
//     }
//     
//     // private void DeleteLayerObjects()
//     // {
//     //     var db = _document.Database;
//     //
//     //     var tr = db.TransactionManager.StartTransaction();
//     //     
//     //     var bt = (BlockTable)tr.GetObject(db.BlockTableId, OpenMode.ForWrite);
//     //     var btr = (BlockTableRecord)tr.GetObject(bt[BlockTableRecord.ModelSpace], OpenMode.ForWrite);
//     //
//     //     foreach (var objId in btr)
//     //     {
//     //         var ent = tr.GetObject(objId, OpenMode.ForWrite) as Entity;
//     //         if (ent != null && ent.Layer == LayerName)
//     //         {
//     //             ent.UpgradeOpen();
//     //             ent.Erase();
//     //         }
//     //     }
//     //
//     //     tr.Commit();
//     // }
//     
//     private void Print(IEnumerable<Drawable> geometries)
//     {
//         var db = _document.Database;
//         var tr = db.TransactionManager.StartTransaction();
//         
//         var bt = (BlockTable)tr.GetObject(db.BlockTableId, OpenMode.ForRead);
//         var btr = (BlockTableRecord)tr.GetObject(bt[BlockTableRecord.ModelSpace], OpenMode.ForWrite);
//
//         foreach (var geometry in geometries)
//         {
//             switch (geometry)
//             {
//                 case Line line:
//                     btr.AppendEntity(line);
//                     tr.AddNewlyCreatedDBObject(line, true);
//                     break;
//
//                 default:
//                     throw new Exception();
//             }
//         }
//         
//         tr.Commit();
//     }
//
//     private void PrintPolygons(IEnumerable<Polygon> polygons, Color? color = null, double level = 0)
//     {
//         var buildingPerimeterCoordinates = polygons.Select(x => x.ExteriorRing.Coordinates);
//         var lines = new List<Line>();
//         foreach (var resCoordinates in buildingPerimeterCoordinates)
//         {
//             for (int i = 0; i < resCoordinates.Length - 1; i++)
//             {
//                 var currPoint = resCoordinates[i];
//                 var nextPoint = resCoordinates[i + 1];
//                 lines.Add(
//                     new Line
//                     {
//                         StartPoint = new Point3d(currPoint.X, currPoint.Y, level),
//                         EndPoint = new Point3d(nextPoint.X, nextPoint.Y, level),
//                         Layer = LayerName,
//                         Color =  color ?? _defaultColor,
//                     });
//             }
//         }
//         Print(lines);
//     }
// }