using System.Globalization;
using BIMStructureMgd.Common;
using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.NanoCadAdapter.Extensions;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Results;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Geometry;
using HeatLoss.NanoCadAdapter.DTO;
using HeatLoss.NanoCadAdapter.Objects;
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

namespace HeatLoss.NanoCadAdapter;

public class Adapter
{
    private List<SpaceEntity> _nanocadSpaces = new();
    private List<LinearBuildingWall> _nanocadWalls  = new();
    private List<BuildingOpening> _nanocadOpenings = new();
    private List<CoordinateGridRef> _nanocadGrids = new();
    private List<BuildingSlab> _nanocadSlabs = new();

    private readonly Dictionary<string, double> _materialsThermalConductivity = new ();
    private Dictionary<CardinalDirection, Vector2D> _cardinalDirections = new ();
    
    private readonly Document _document;
    private readonly Editor _editor;
    private readonly HeatLossGeometry _geometry;

    private ProjectDataDto? _projectData;
    private readonly List<SpaceDto> _spaceDtos = new();

    private readonly Validator _validator;
    
    public Adapter()
    {
        _document = Application.DocumentManager.MdiActiveDocument;
        _editor = _document.Editor;
        _geometry = new HeatLossGeometry();
        _validator = new Validator(_document);
    }

    public Building GetBuildingInfo()
    {
        _nanocadSpaces = FindObjects<SpaceEntity>().ToList();
        _nanocadWalls = FindObjects<LinearBuildingWall>().ToList();
        _nanocadOpenings = FindObjects<BuildingOpening>().ToList();
        _nanocadGrids = FindObjects<CoordinateGridRef>().ToList();
        _nanocadSlabs = FindObjects<BuildingSlab>().ToList();
        
        InitProjectData();
        
        CreateSpaces();
        
        MoveSpaceInsideEdges();

        CreateWalls();

        CreateOpenings();

        CreateFloorAreas();

        CreateCeilings();
        
        _editor.WriteMessage($"!!!! Finished !!!!!");

        return GetBuilding();
    }

    public void SetHeatLossToSpaces(BuildingHeatLossResult heatLossResult)
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

    private void  CreateSpaces()
    {
        foreach (var nanocadSpace in _nanocadSpaces)
        {
            // создаем помещение
            var spaceDto = nanocadSpace.ToSpaceDto();
            var spaceCoordinates = nanocadSpace.GetCoordinates().ToList();
            for (int i = 0; i < spaceCoordinates.Count; i++)
            {
                var currentCoordinate = spaceCoordinates[i];
                var nextCoordinate = spaceCoordinates[i == spaceCoordinates.Count - 1 ? 0 : i + 1];
                
                // создаем сторону помещения
                var spaceEdge = new SpaceEdgeDto(currentCoordinate, nextCoordinate);
                
                var possibleWalls = _nanocadWalls
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
                var possibleOpenings = _nanocadOpenings
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
        _validator.ValidateSpaces(_spaceDtos);
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
                        Mark = modelWall.GetParameter("BUILD_MATERIAL_ID"),
                        Position = modelWall.GetPosition(),
                        Thickness = modelWall.Thickness,
                        Polygon = CreateWallPolygon(edge.LineString, modelWall.Thickness, 0),
                        Width = edge.LineString.Length + GetWallThickness(prevEdge.ModelWall!) +  GetWallThickness(nextEdge.ModelWall!),
                        Height = space.Height,
                        BottomLevel = space.BottomLevel,
                        ThermalConductivity = _materialsThermalConductivity[modelWall.GetParameter(Parameter.Names.BuildMaterialId)],
                        CardinalDirection = GetCardinalDirection(edge.LineString, modelWall.GetPolygon())
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
                                        Mark = modelWall.GetParameter("BUILD_MATERIAL_ID"),
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
                                }
                            }
                        }
                    }
                }
                else
                    throw new NotImplementedException(); // TODO: remove?
            }
        }
        
        _validator.ValidateWalls(_nanocadGrids, _spaceDtos);
        
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
                                BottomLevel = opening.BasePoint.Z,
                                ThermalConductivity = double.TryParse(opening.GetParameter("BUILD_THERMAL_CONDUCTIVITY"),  NumberStyles.Any , CultureInfo.InvariantCulture,out var value) ? value : 0,
                                Type = Enum.Parse<OpeningType>(opening.AECType.ToString()),
                                Mark = opening.GetParameter("BOM_MARK"),
                                CardinalDirection = wall.Position == SurfacePosition.Outside ? GetCardinalDirection(edge.LineString, opening.GetPolygon()) : null
                            });
                        }
                    }
                }
            }
        }

        _validator.ValidateOpenings(_spaceDtos.SelectMany(x => x.Edges).SelectMany(x => x.Walls).SelectMany(x => x.Openings).ToList());
    }

    private void CreateFloorAreas()
    {
        var fistFloor = _nanocadGrids.Single().AxisZ.Points.OrderBy(x => x.Position).First(); //TODO: что если несколько сеток осей?
        var firstFloorSpaces = _spaceDtos.Where(x => Math.Abs(x.BottomLevel - fistFloor.Position) < 1).ToList();
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
            var floor = new FloorDto();
            var spacePolygon = UnaryUnionOp.Union(space.GetPolygon());
            if (fourthArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaDto
                {
                    FloorAreaNumber = FloorAreaNumber.Fourth,
                    Area = Math.Round(fourthArea.Intersection(spacePolygon).Area/1000000, 2),
                    ThermalConductivity = _projectData!.FourthFloorAreaThermalConductivity
                });
            }
            if (thirdArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaDto
                {
                    FloorAreaNumber = FloorAreaNumber.Third,
                    Area = Math.Round(thirdArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = _projectData!.ThirdFloorAreaThermalConductivity
                });
            }
            if (secondArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaDto
                {
                    FloorAreaNumber = FloorAreaNumber.Second,
                    Area = Math.Round(secondArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = _projectData!.SecondFloorAreaThermalConductivity
                });
            }
            if (firstArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaDto
                {
                    FloorAreaNumber = FloorAreaNumber.First,
                    Area = Math.Round(firstArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = _projectData!.FirstFloorAreaThermalConductivity
                });
            }
            space.Floor = floor;
        }
    }

    private void CreateCeilings()
    {
        var spacesByBottom = _spaceDtos.GroupBy(x => x.BottomLevel).ToDictionary(x => x.Key, x => x.ToList());
        var spacesByTop = _spaceDtos.GroupBy(x => x.BottomLevel + x.Height).ToDictionary(x => x.Key, x => x.ToList());
        var slabs = _nanocadGrids.Single().AxisZ.Points
            .OrderBy(x => x.Position)
            .ToDictionary(g => g.Position, g => _nanocadSlabs.Where(x => Math.Abs(x.BasePoint.Z - g.Position) < 1).ToArray());

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

    private Building GetBuilding()
    {
        return new Building
        {
            OutsideTemperature = _projectData!.OutsideTemperature,
            Spaces = _spaceDtos.Select(x => x.ToSpace()).ToList()
        };
    }

    /// <summary>
    /// Создание полигона для фактического участка стены помещения
    /// </summary>
    private Polygon CreateWallPolygon(LineString baseLine, double internalOffset, double externalOffset)
        => _geometry.CreatePolygonByLine(baseLine, internalOffset, externalOffset);
    
    /// <summary>
    /// Получение стороны света ограждающей конструкции
    /// </summary>
    private CardinalDirection GetCardinalDirection(LineString spaceEdge, Polygon surfacePolygon)
    {
        var vect = _geometry.GetInnerPerpendicular(surfacePolygon, spaceEdge);
        
        var minAngle = Math.PI;
        var cardinalDirection = CardinalDirection.N;
        foreach (var pair in _cardinalDirections)
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
    
    /// <summary>
    /// Сдвиг внутренних граней помещения до середины внутренней стены
    /// </summary>
    private void MoveSpaceInsideEdges()
    {
        foreach (var space in _spaceDtos)
        {
            var spaceEdges = space.Edges;
            for (int i = 0; i < spaceEdges.Count; i++)
            {
                var currentEdge = spaceEdges[i];
                if (currentEdge.ModelWall!.GetPosition() == SurfacePosition.Inside) //TODO:: реализовать для нескольких стен, в т.ч. разных
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
    
    private IEnumerable<T> FindObjects<T>() where T: Entity
    {
        var db = _document.Database;

        var tr = db.TransactionManager.StartTransaction();
        var filter = new SelectionFilter(new[] {
            new TypedValue((int)DxfCode.Start, RXObject.GetClass(typeof(T)).DxfName)
        });
        var promptResult = _editor.SelectAll(filter);

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

    private void InitProjectData()
    {
        _validator.CollectionIsNotEmpty(_nanocadSpaces);
        _validator.CollectionIsNotEmpty(_nanocadWalls);
        _validator.CollectionIsNotEmpty(_nanocadOpenings);
        _validator.CollectionIsNotEmpty(_nanocadSlabs);
        _validator.CollectionIsNotEmpty(_nanocadGrids);
        
        // Ищем или создаем ProjectData на чертеже
        var projectData = GetProjectData();
        if (projectData == null)
        {
            CreateProjectData();
            projectData = GetProjectData();
        }
        
        _projectData = new ProjectDataDto
        {
            OutsideTemperature = double.Parse(projectData!.GetParameter("HL_OUTSIDE_TEMPERATURE"), NumberStyles.Any, CultureInfo.InvariantCulture),
            FirstFloorAreaThermalConductivity = double.Parse(projectData!.GetParameter("HL_FLOOR_AREA1_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
            SecondFloorAreaThermalConductivity = double.Parse(projectData!.GetParameter("HL_FLOOR_AREA2_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
            ThirdFloorAreaThermalConductivity = double.Parse(projectData!.GetParameter("HL_FLOOR_AREA3_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
            FourthFloorAreaThermalConductivity = double.Parse(projectData!.GetParameter("HL_FLOOR_AREA4_THERMAL_CONDUCTIVITY"), NumberStyles.Any, CultureInfo.InvariantCulture),
        };
        
        _validator.ValidateProjectData(_projectData);

        // определяем положение сторон света
        _cardinalDirections = new Dictionary<CardinalDirection, Vector2D>
        {
            [CardinalDirection.N] = new (new Coordinate(projectData!.YDir.X, projectData.YDir.Y))
        };
        for (int i = 1; i < 8; i++)
        {
            _cardinalDirections[(CardinalDirection)i] = _cardinalDirections[(CardinalDirection)(i - 1)].Rotate(- Math.PI / 4);
        }
        
        // Ищем используемые в проекте материалы
        var materialLibrary = ProjectMaterialLibrary.Current;

        var surfaces = new List<StructuralSurface>();
        surfaces.AddRange(_nanocadSlabs);
        surfaces.AddRange(_nanocadWalls);
        
        foreach (var surface in surfaces)
        {
            var materialId = surface.GetElementData().GetParameter(Parameter.Names.BuildMaterialId)?.Value;
            if (materialId != null && !_materialsThermalConductivity.ContainsKey(materialId))
            {
                var material = materialLibrary.GetMaterialById(materialId);
                var thermalConductivity = material.GetParameter("BUILD_THERMAL_CONDUCTIVITY");
                _materialsThermalConductivity[materialId] = double.TryParse(thermalConductivity, NumberStyles.Any , CultureInfo.InvariantCulture, out var result) ? result : 0.0 ;
            }
        }
        
        _validator.ValidateMaterials(_materialsThermalConductivity);
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
    
    private ParametricEntity? GetProjectData()
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