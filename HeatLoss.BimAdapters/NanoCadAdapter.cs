using BIMStructureMgd.Common;
using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.BimAdapters.DTO;
using HeatLoss.BimAdapters.Extensions;
using HeatLoss.Geometry;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using NetTopologySuite.Geometries;
using NetTopologySuite.Operation.Union;
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
    private List<CoordinateGridRef> nanocadGrids;
    private List<BuildingSlab> nanocadSlabs;

    private Dictionary<string, double> _materialsThermalConductivity = new ();
    
    private List<Polygon> firstFloorGeometry;
    private List<Polygon> secondFloorGeometry;
    private List<Polygon> thirdFloorGeometry;
    private List<Polygon> fourthFloorGeometry;
    
    
    private readonly List<SpaceDto> _spaceDtos = new();
    
    public void InitBuildingInfo()
    {
        var document = Application.DocumentManager.MdiActiveDocument;
        var editor = document.Editor;
        
        nanocadSpaces = FindObjects<SpaceEntity>().ToList();
        nanocadWalls = FindObjects<LinearBuildingWall>().ToList();
        nanocadOpenings = FindObjects<BuildingOpening>().ToList();
        nanocadGrids = FindObjects<CoordinateGridRef>().ToList();
        nanocadSlabs = FindObjects<BuildingSlab>().ToList();
        
        GetMaterialsInfo();
        
        CreateSpaces();
        
        // validate
        foreach (var space in _spaceDtos)
        {
            var eww = space.Edges.Where(e => e.ModelWall == null);
            if (eww.Count() > 0)
            {
                editor.WriteMessage($"----- Room: {space.Number}. {eww.Count()} edges without wall");
                foreach (var e in eww)
                {
                    Print(new []{new Line(new Point3d(e.Start.X, e.Start.Y, space.BottomLevel), new Point3d(e.End.X, e.End.Y, space.BottomLevel))}, Color.FromRgb(255, 0, 0));
                }
            }
        }
        
        MoveSpaceInsideEdges();

        CreateWalls();

        CreateOpenings();

        CreateFloorAreas();

        CreateCeilings();
        
        
        // далее удалить
 
        var orderedSpaces = _spaceDtos.OrderBy(x => x.Number).ToList();
        for (int i = 0; i < orderedSpaces.Count; i++)
        {
            var s = orderedSpaces[i];
            var color = Color.FromColorIndex(ColorMethod.ByAci, (short)i);
            PrintPolygons(new []{ s.GetPolygon()}, color, s.BottomLevel);
            editor.WriteMessage($"Помещение {s.Number} {s.Name}");
            var walls = s.Edges.SelectMany(x => x.Walls).OrderBy(x => x.AdjacentSpace?.Number).ToList();
            
            // стены и проемы
            // foreach (var wall in walls)
            // {
            //     editor.WriteMessage($"--- {wall.Position} W:{wall.Width} H:{wall.Height} Z:{wall.BottomLevel}" + (wall.Position == WallPosition.Inside ? $" пом: {wall.AdjacentSpace!.Number}" : string.Empty));
            //     foreach (var opening in wall.Openings)
            //     {
            //         editor.WriteMessage($"------ {opening.Name} W:{opening.Width}, H:{opening.Height} Z:{opening.BottomLevel}");
            //     }
            // }
            PrintPolygons(walls.Select(x => x.Polygon).ToList(), color, s.BottomLevel);
            // PrintPolygons(walls.SelectMany(x => x.Openings).Select(x => x.Polygon).ToList(), color, s.BottomLevel);
        }
        
        // зоны помещений первого этажа
        var fistFloor = nanocadGrids.Single().AxisZ.Points.OrderBy(x => x.Position).First(); //TODO: что если несколько сеток осей?
        var firstFloorSpaces = _spaceDtos.Where(x => Math.Abs(x.BottomLevel - fistFloor.Position) < 1).OrderBy(x => x.Number).ToList();
        foreach (var s in firstFloorSpaces)
        {
            editor.WriteMessage($"--- {s.Number} 1:{s.Floor.FirstFloorAreaArea} 2:{s.Floor.SecondFloorAreaArea}, 3:{s.Floor.ThirdFloorAreaArea} 4:{s.Floor.FourthFloorAreaArea}");
        }
        
        PrintPolygons(firstFloorGeometry, Color.FromColorIndex(ColorMethod.ByAci, 1), 0);
        PrintPolygons(secondFloorGeometry, Color.FromColorIndex(ColorMethod.ByAci, 2), 0);
        PrintPolygons(thirdFloorGeometry, Color.FromColorIndex(ColorMethod.ByAci, 3), 0);
        PrintPolygons(fourthFloorGeometry, Color.FromColorIndex(ColorMethod.ByAci, 4), 0);
        
        
        editor.WriteMessage($"!!!! Finished !!!!!");
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

    private void PrintPolygons(IEnumerable<Polygon> polygons, Color color, double level = 7000)
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
                
                var possibleWalls = nanocadWalls
                    .Where(w => spaceDto.HaveVerticalIntersection(w))
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
                    .Where(o => spaceDto.IsOpeningBelong(o))
                    .ToList();
                
                foreach (var nanocadOpening in possibleOpenings)
                {
                    var intersection = nanocadOpening.GetPolygon().Intersection(spaceEdge.LineString);    
                    if (Math.Round(intersection.Length) > 0) 
                    {
                        spaceEdge.ModelOpenings.Add(nanocadOpening);
                    }
                }
                spaceDto.Edges.Add(spaceEdge);
            }
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
                if (modelWall.GetPosition() == SurfacePosition.Outside)
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
                        Height = space.Height,
                        BottomLevel = space.BottomLevel,
                        ThermalConductivity = _materialsThermalConductivity[modelWall.GetParameter(Parameter.Names.BuildMaterialId)]
                    };
                    edge.Walls.Add(wall);
                }
                else if (modelWall.GetPosition() == SurfacePosition.Inside)
                {
                    // получаем помещения, которые контактируют с той же стеной 
                    var connectedSpaces = _spaceDtos
                        .Where(s => s.Edges.Any(e => e.ModelWall!.Id.ToLong() == modelWall.Id.ToLong())
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
                                    var wall = new WallDto
                                    {
                                        Position = modelWall.GetPosition(),
                                        Thickness = modelWall.Thickness,
                                        Polygon = CreateWallPolygon(ls, modelWall.Thickness / 2, modelWall.Thickness / 2),
                                        AdjacentSpace = anotherSpace,
                                        Width = intersection.Length,
                                        Height = space.GetVerticalIntersectionLenght(anotherSpace),
                                        BottomLevel = space.GetVerticalIntersectionLevels(anotherSpace).bottom,
                                        ThermalConductivity = _materialsThermalConductivity[modelWall.GetParameter(Parameter.Names.BuildMaterialId)]
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
        }
        
        double GetWallThickness(LinearBuildingWall wall)
        {
            switch (wall.GetPosition())
            {
                case SurfacePosition.Inside: return 0;
                case SurfacePosition.Outside: return wall.Thickness;
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
                    var possibleOpenings = edge.ModelOpenings 
                        .Where(o => wall.IsOpeningBelong(o))
                        .ToList();
                    foreach (var opening in possibleOpenings)
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
                                BottomLevel = opening.BasePoint.Z
                            });
                        }
                    }
                }
            }
        }
    }

    private void CreateFloorAreas()
    {
        var fistFloor = nanocadGrids.Single().AxisZ.Points.OrderBy(x => x.Position).First(); //TODO: что если несколько сеток осей?
        var firstFloorSpaces = _spaceDtos.Where(x => Math.Abs(x.BottomLevel - fistFloor.Position) < 1).ToList();
        firstFloorGeometry = MyGeometry.GetCommonPerimeters(firstFloorSpaces.Select(x => x.GetPolygon()), 1000).ToList();
        secondFloorGeometry = MyGeometry.CreatePolygonsWithOffset(firstFloorGeometry, -2000);
        thirdFloorGeometry = MyGeometry.CreatePolygonsWithOffset(secondFloorGeometry, -2000);
        fourthFloorGeometry = MyGeometry.CreatePolygonsWithOffset(thirdFloorGeometry, -2000);

        var fourthArea = UnaryUnionOp.Union(fourthFloorGeometry);
        var thirdArea = UnaryUnionOp.Union(thirdFloorGeometry);
        var secondArea = UnaryUnionOp.Union(secondFloorGeometry);
        var firstArea = UnaryUnionOp.Union(firstFloorGeometry);
        
        foreach (var space in firstFloorSpaces)
        {
            var floor = new FloorDto();
            var spacePolygon = UnaryUnionOp.Union(space.GetPolygon());
            if (fourthArea.Area > 0)
            {
                floor.FourthFloorAreaArea = Math.Round(fourthArea.Intersection(spacePolygon).Area/1000000, 2);
            }
            if (thirdArea.Area > 0)
            {
                floor.ThirdFloorAreaArea = Math.Round(thirdArea.Intersection(spacePolygon).Area/1000000 - floor.FourthFloorAreaArea, 2);
            }
            if (secondArea.Area > 0)
            {
                floor.SecondFloorAreaArea = Math.Round(secondArea.Intersection(spacePolygon).Area/1000000 - floor.ThirdFloorAreaArea - floor.FourthFloorAreaArea, 2);
            }
            if (firstArea.Area > 0)
            {
                floor.FirstFloorAreaArea = Math.Round(firstArea.Intersection(spacePolygon).Area/1000000 - floor.SecondFloorAreaArea - floor.ThirdFloorAreaArea - floor.FourthFloorAreaArea, 2);
            }
            space.Floor = floor;
        }
    }

    private void CreateCeilings()
    {
        var spacesByBottom = _spaceDtos.GroupBy(x => x.BottomLevel).ToDictionary(x => x.Key, x => x.ToList());
        var spacesByTop = _spaceDtos.GroupBy(x => x.BottomLevel + x.Height).ToDictionary(x => x.Key, x => x.ToList());
        var slabs = nanocadGrids.Single().AxisZ.Points
            .OrderBy(x => x.Position)
            .ToDictionary(g => g.Position, g => nanocadSlabs.Where(x => Math.Abs(x.BasePoint.Z - g.Position) < 1).ToArray());

        foreach (var currentSpace in _spaceDtos)
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
                var anotherSpaces = level.Item1 ?? new List<SpaceDto>();
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
                                var ceiling = new CeilingDto
                                {
                                    Space = anotherSpace,
                                    Area = Math.Round(floorIntersection.Area / 1_000_000, 2),
                                    Position = SurfacePosition.Inside,
                                    Slab = slab,
                                    ThermalConductivity = _materialsThermalConductivity[slab.GetParameter(Parameter.Names.BuildMaterialId)],
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
                            var topCeiling = new CeilingDto
                            {
                                Area = Math.Round(currentSpace.GetPolygon().Area / 1_000_000, 2),
                                Position = SurfacePosition.Outside,
                                Slab = slab,
                                ThermalConductivity = _materialsThermalConductivity[slab.GetParameter(Parameter.Names.BuildMaterialId)],
                            };
                            currentSpace.Ceiling.Add(topCeiling);
                        }
                    }
                }
            }
        }
    }

    private void GetMaterialsInfo()
    {
        var materialLibrary = ProjectMaterialLibrary.Current;

        var surfaces = new List<StructuralSurface>();
        surfaces.AddRange(nanocadSlabs);
        surfaces.AddRange(nanocadWalls);
        
        foreach (var surface in surfaces)
        {
            var materialId = surface.GetElementData().GetParameter(Parameter.Names.BuildMaterialId)?.Value;
            if (materialId != null && !_materialsThermalConductivity.ContainsKey(materialId))
            {
                var material = materialLibrary.GetMaterialById(materialId);
                var thermalConductivity = material.GetParameter("BUILD_THERMAL_CONDUCTIVITY");
                _materialsThermalConductivity[materialId] = double.TryParse(thermalConductivity, out var result) ? result : 0.0 ;
            }
        }
    }

    /// <summary>
    /// Создание полигона для фактического участка стены помещения
    /// </summary>
    private Polygon CreateWallPolygon(LineString baseLine, double internalOffset, double externalOffset)
        => MyGeometry.CreatePolygonByLine(baseLine, internalOffset, externalOffset);
    
    /// <summary>
    /// Сдвиг внутренних граней помещения до середины внутренней стены
    /// </summary>
    private void MoveSpaceInsideEdges() //TODO: перенести это в геометрию
    {
        foreach (var space in _spaceDtos)
        {
            // GeometryFactory factory = new GeometryFactory(); //TODO: использовать factory?
            var spaceEdges = space.Edges;
            for (int i = 0; i < spaceEdges.Count; i++)
            {
                var currentEdge = spaceEdges[i];
                if (currentEdge.ModelWall!.GetPosition() == SurfacePosition.Inside) //TODO:: реализовать для нескольких стен, в т.ч. разных
                {
                    var previousEdge = spaceEdges[i == 0 ? spaceEdges.Count - 1 : i - 1];
                    var nextEdge = spaceEdges[i == spaceEdges.Count - 1 ? 0 : i + 1];
                    var offset = - currentEdge.ModelWall!.Thickness / 2;

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
    }
    
    private static IEnumerable<T> FindObjects<T>() where T: Entity
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