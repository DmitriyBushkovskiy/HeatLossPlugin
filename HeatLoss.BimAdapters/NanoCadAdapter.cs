using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.BimAdapters.DTO;
using HeatLoss.BimAdapters.Extensions;
using HeatLoss.Geometry;
using HeatLoss.Geometry.Extensions;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using NetTopologySuite.Geometries;
using Teigha.Colors;
using Teigha.DatabaseServices;
using Teigha.Geometry;
using Teigha.GraphicsInterface;
using Teigha.Runtime;
using Exception = System.Exception;

namespace HeatLoss.BimAdapters;

public class NanoCadAdapter
{
    private List<SpaceEntity> nanocadSpaces;
    private List<LinearBuildingWall> nanocadWalls;
    private List<BuildingOpening> nanocadOpenings;
    
    private readonly List<SpaceDto> _spaceDtos = new();
    
    public void InitBuildingInfo()
    {
        nanocadSpaces = FindObjects<SpaceEntity>().ToList();
        nanocadWalls = FindObjects<LinearBuildingWall>().ToList();
        nanocadOpenings = FindObjects<BuildingOpening>().ToList();
        
        CreateSpaces();

        CreateWalls();

        CreateOpenings();
        
        
        
        
        // далее удалить
        var document = Application.DocumentManager.MdiActiveDocument;
        var editor = document.Editor;
        
        for (int i = 0; i < _spaceDtos.Count; i++)
        {
            var s = _spaceDtos[i];
            var color = Color.FromColorIndex(ColorMethod.ByAci, (short)i);
            // PrintPolygons(new []{ s.GetPolygon()}, color, 6000);
            editor.WriteMessage($"Помещение {s.Number} {s.Name}");
            foreach (var edge in s.Edges)
            {
                foreach (var wall in edge.Walls)
                {
                    editor.WriteMessage($"--- {wall.Position} {wall.Width}" + (wall.Position == WallPosition.Inside ? $" смежное помещение: {wall.AdjacentSpace!.Number} {wall.AdjacentSpace.Name}" : string.Empty));
                    foreach (var opening in wall.Openings)
                    {
                        editor.WriteMessage($"------ {opening.Name} W:{opening.Width}, H:{opening.Height}");
                    }
                }
                PrintPolygons(edge.Walls.Select(x => x.Polygon).ToList(), color);
                PrintPolygons(edge.Walls.SelectMany(x => x.Openings).Select(x => x.Polygon).ToList(), color);
            }
        }
    }
    
    private void Print(IEnumerable<Drawable> geometries, Color color)
    {
        var curDoc = Application.DocumentManager.MdiActiveDocument;
        var db = curDoc.Database;
        var tr = db.TransactionManager.StartTransaction();
        
        var bt = (BlockTable)tr.GetObject(db.BlockTableId, OpenMode.ForRead);
        var btr = (BlockTableRecord)tr.GetObject(bt[BlockTableRecord.ModelSpace], OpenMode.ForWrite);

        foreach (var geometry in geometries)
        {
            switch (geometry)
            {
                case Line line:
                    line.Color =  color;
                    line.LineWeight = LineWeight.LineWeight050;
                    btr.AppendEntity(line);
                    tr.AddNewlyCreatedDBObject(line, true);
                    break;

                default:
                    throw new Exception();
            }
        }
        
        tr.Commit();
    }

    private void PrintPolygons(IEnumerable<Polygon> polygons, Color color, int level = 7000)
    {
        var buildingPerimeterCoordinates = polygons.Select(x => x.ExteriorRing.Coordinates);
        var lines = new List<Line>();
        foreach (var resCoordinates in buildingPerimeterCoordinates)
        {
            for (int i = 0; i < resCoordinates.Length - 1; i++)
            {
                var currPoint = resCoordinates[i];
                var nextPoint = resCoordinates[i + 1];
                lines.Add(new Line(new Point3d(currPoint.X, currPoint.Y, level), new Point3d(nextPoint.X, nextPoint.Y, level)));
            }
        }
        Print(lines, color);
    }

    private void  CreateSpaces()
    {
        foreach (var nanocadSpace in nanocadSpaces)
        {
            // создаем помещение
            var spaceDto = new SpaceDto(nanocadSpace);
            var spaceCoordinates = nanocadSpace.GetCoordinates().ToList();
            for (int i = 0; i < spaceCoordinates.Count; i++)
            {
                var currentCoordinate = spaceCoordinates[i];
                var nextCoordinate = spaceCoordinates[i == spaceCoordinates.Count - 1 ? 0 : i + 1];
                
                // создаем сторону помещения
                var spaceEdge = new SpaceEdgeDto(currentCoordinate, nextCoordinate);
                
                // находим стену, которой принадлежит граница помещения
                foreach (var nanocadWall in nanocadWalls)
                {
                    var intersection = nanocadWall.GetPolygon().Intersection(spaceEdge.LineString);    
                    // проверяем что есть пересечение, и это не пересечение с торцом стены
                    if (Math.Round(intersection.Length) > 0 && Math.Abs(nanocadWall.Thickness - intersection.Length) > 1) 
                    {
                        spaceEdge.ModelWall = nanocadWall;
                    }
                }
                
                // находим проемы, которые находятся на границе помещения
                foreach (var nanocadOpening in nanocadOpenings)
                {
                    var intersection = nanocadOpening.GetPolygon().Intersection(spaceEdge.LineString);    
                    if (Math.Round(intersection.Length) > 0) 
                    {
                        spaceEdge.ModelOpenings.Add(nanocadOpening);
                    }
                }
                
                spaceDto.Edges.Add(spaceEdge);
            }

            MoveSpaceInsideEdges(spaceDto);
            _spaceDtos.Add(spaceDto);
        }
    }

    /// <summary>
    /// Создание участка стены для помещения
    /// </summary>
    private void CreateWalls()
    {
        foreach (var space in _spaceDtos)
        {
            for (var i = 0; i < space.Edges.Count; i++)
            {
                var edge = space.Edges[i];
                var modelWall = edge.ModelWall!;
                if (modelWall.GetPosition() == WallPosition.Outside)
                {
                    var prevEdge = space.Edges[i == 0 ? space.Edges.Count - 1 : i - 1];
                    var nextEdge = space.Edges[i == space.Edges.Count - 1 ? 0 : i + 1];
                    var wall = new WallDto
                    {
                        Id = modelWall.Id.ToLong(),
                        Position = modelWall.GetPosition(),
                        Thickness = modelWall.Thickness,
                        Polygon = CreateWallPolygon(edge.LineString, modelWall.Thickness, 0),
                        Width = edge.LineString.Length + GetWallThickness(prevEdge.ModelWall!) +  GetWallThickness(nextEdge.ModelWall!),
                        Height = space.Height
                    };
                    edge.Walls.Add(wall);
                }
                else if (modelWall.GetPosition() == WallPosition.Inside)
                {
                    // получаем помещения, которые контактируют с той же стеной
                    var connectedSpaces = _spaceDtos.Where(s => s.Edges.Any(e => e.ModelWall!.Id.ToLong() == modelWall.Id.ToLong())).ToList();
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
                                    var wall = new WallDto
                                    {
                                        Position = modelWall.GetPosition(),
                                        Thickness = modelWall.Thickness,
                                        Polygon = CreateWallPolygon(ls, modelWall.Thickness / 2, modelWall.Thickness / 2),
                                        AdjacentSpace = anotherSpace,
                                        Width = intersection.Length,
                                        Height = space.Height,
                                    };
                                    edge.Walls.Add(wall);
                                    // w.BelongToSpaces.Add(space);
                                    // Print(new []{ new Line() }, CustomColors.Red);
                                }
                            }
                        }
                    }
                }
                else
                    throw new NotImplementedException(); // TODO: remove?
            }
            
            // space.SetWallSizes();
        }
        
        double GetWallThickness(LinearBuildingWall wall)
        {
            switch (wall.GetPosition())
            {
                case WallPosition.Inside: return 0;
                case WallPosition.Outside: return wall.Thickness;
                default: throw new ArgumentOutOfRangeException(nameof(wall), wall, null);
            }
        }
    }

    private void CreateOpenings()
    {
        foreach (var space in _spaceDtos)
        {
            foreach (var edge in space.Edges)
            {
                foreach (var wall in edge.Walls)
                {
                    foreach (var opening in edge.ModelOpenings)
                    {
                        var intersection = wall.Polygon.Intersection(opening.GetPolygon());
                        if (!intersection.IsEmpty)
                        {
                            wall.Openings.Add(new OpeningDto
                            {
                                Id = Guid.NewGuid(),
                                Polygon = opening.GetPolygon(),
                                Name = opening.Name,
                                Width = opening.Width,
                                Height = opening.Height,
                            });
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
        => MyGeometry.CreatePolygonByLine(baseLine, internalOffset, externalOffset);
    
    private static void MoveSpaceInsideEdges(SpaceDto space) //TODO: перенести это в геометрию
    {
        // GeometryFactory factory = new GeometryFactory(); //TODO: использовать factory?
        var spaceEdges = space.Edges;
        for (int i = 0; i < spaceEdges.Count; i++)
        {
            var currentEdge = spaceEdges[i];
            if (currentEdge.ModelWall!.GetPosition() == WallPosition.Inside) //TODO:: реализовать для нескольких стен, в т.ч. разных
            {
                var previousEdge = spaceEdges[i == 0 ? spaceEdges.Count - 1 : i - 1];
                var nextEdge = spaceEdges[i == spaceEdges.Count - 1 ? 0 : i + 1];
                var offset = - currentEdge.ModelWall!.Thickness / 2;
                
                // // находим направление отрезка
                // var dx = currentEdge.End.X - currentEdge.Start.X;
                // var dy = currentEdge.End.Y - currentEdge.Start.Y;
                // var len = Math.Sqrt(dx * dx + dy * dy);
                //
                // dx /= len;
                // dy /= len;
                //
                // // находим нормаль
                // var nx = -dy;
                // var ny = dx;
                //
                // // новые точки после сдвига
                // var newStart = new Coordinate(currentEdge.Start.X + nx * offset, currentEdge.Start.Y + ny * offset);
                // var newEnd = new Coordinate(currentEdge.End.X + nx * offset, currentEdge.End.Y + ny * offset);

                var newLine = MyGeometry.MoveLine(currentEdge.LineString, offset);
                
                // новые точки пересечения
                var newIntersectionStartPoint = MyGeometry.FindIntersectionPoint(newLine, previousEdge.LineString);
                var newIntersectionEndPoint = MyGeometry.FindIntersectionPoint(newLine, nextEdge.LineString);
                
                // меняем координаты отрезков
                previousEdge.ChangeCoordinates(previousEdge.Start, newIntersectionStartPoint);
                nextEdge.ChangeCoordinates(newIntersectionEndPoint, nextEdge.End);
                currentEdge.ChangeCoordinates(newIntersectionStartPoint, newIntersectionEndPoint);
            }
        }
    }
    
    private static IEnumerable<T> FindObjects<T>() where T: IParametricObject
    {
        var document = Application.DocumentManager.MdiActiveDocument;
        var editor = document.Editor;
        var db = document.Database;

        var tr = db.TransactionManager.StartTransaction();
        var filter = new SelectionFilter(new[] {
            new TypedValue((int)DxfCode.Start, RXObject.GetClass(typeof(T)).DxfName)
        });
        var promptResult = editor.SelectAll(filter);

        var selectionSet = promptResult.Status == PromptStatus.OK ? promptResult.Value : null;

        if (selectionSet == null || selectionSet.Count < 1)
            selectionSet = new SelectionSet();

        foreach (SelectedObject selectedObject in selectionSet)
        {
            var dbObject = tr.GetObject(selectedObject.ObjectId, OpenMode.ForRead);
            if (dbObject is T res)
                yield return res;
        }
        tr.Commit();
    }
}