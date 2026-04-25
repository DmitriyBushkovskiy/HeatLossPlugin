using System.Globalization;
using HeatLoss.Application.Models;
using HeatLoss.Domain.Enums;
using HeatLoss.Geometry;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Enums;
using HeatLoss.Infrastructure.Common.Models;
using NetTopologySuite.Geometries;
using NetTopologySuite.Operation.Union;

namespace HeatLoss.Application;

public class BuildingModelFactory
{
    private readonly HeatLossGeometry _geometry;
    private readonly Mapper _mapper;
    private readonly Validator _validator;
    private readonly IParameterResolver _parameterResolver;
    
    public BuildingModelFactory(
        HeatLossGeometry geometry,
        IBimProvider bimProvider)
    {
        _geometry = geometry;
        _parameterResolver = bimProvider.ParameterResolver;
        _mapper = new Mapper(_parameterResolver);
        _validator = new Validator(bimProvider);
    }

    public BuildingIntermediateModel Build(BimExtractedData rawData)
    {
        var nanocadSpaces = rawData.Spaces;
        var nanocadWalls = rawData.Walls;
        var nanocadOpenings = rawData.Openings;
        var nanocadGrids = rawData.Grids;
        var nanocadSlabs = rawData.Slabs;
        var materialsThermalConductivity = rawData.MaterialsThermalConductivity;
        var cardinalDirections = rawData.CardinalDirections;
        var projectData = rawData.ProjectData;
        
        var spaces = CreateSpaces(nanocadSpaces, nanocadWalls, nanocadOpenings);
        
        MoveSpaceInsideEdges(spaces);

        CreateWalls(spaces, nanocadGrids, materialsThermalConductivity, cardinalDirections);
        
        CreateOpenings(spaces, cardinalDirections);
        
        CreateFloorAreas(spaces, nanocadGrids, projectData);
        
        CreateCeilings(spaces, nanocadGrids, nanocadSlabs, materialsThermalConductivity);
        
        return new BuildingIntermediateModel(projectData.OutsideTemperature, spaces);
    }

    private List<SpaceIntermediateModel> CreateSpaces(List<SpaceDto> nanocadSpaces, List<LinearWallDto> nanocadWalls, List<OpeningDto> nanocadOpenings)
    {
        var spaces = new List<SpaceIntermediateModel>();
        foreach (var nanocadSpace in nanocadSpaces)
        {
            // создаем помещение
            var space = _mapper.ToSpaceModel(nanocadSpace);
            var spaceCoordinates = nanocadSpace.Coordinates;
            for (int i = 0; i < spaceCoordinates.Count; i++)
            {
                var currentCoordinate = spaceCoordinates[i];
                var nextCoordinate = spaceCoordinates[i == spaceCoordinates.Count - 1 ? 0 : i + 1];
                
                // создаем сторону помещения
                var spaceEdge = new SpaceEdgeIntermediateModel(currentCoordinate, nextCoordinate);
                
                var possibleWalls = nanocadWalls
                    .Where(w => space.HaveVerticalIntersection(w))
                    .ToList();
                // находим стену, которой принадлежит граница помещения
                foreach (var nanocadWall in possibleWalls)
                {
                    var axis = Enum.Parse<EntityAxis>(nanocadWall.Parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.PartAxis)).Value ?? string.Empty);
                    var intersection = _geometry.GetPolygon(nanocadWall, axis).Intersection(spaceEdge.LineString);    
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
                    var axis = Enum.Parse<EntityAxis>(nanocadOpening.Parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.PartAxis)).Value ?? string.Empty);
                    var intersection = _geometry.GetPolygon(nanocadOpening, axis).Intersection(spaceEdge.LineString);    
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
    private void MoveSpaceInsideEdges(List<SpaceIntermediateModel> spaces)
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
    private void CreateWalls(List<SpaceIntermediateModel> spaces, List<CoordinateGridDto> nanocadGrids, Dictionary<string, double> materialsThermalConductivity, Dictionary<CardinalDirection, HeatLoss.Infrastructure.Common.Models.Vector2D> cardinalDirections)
    {
        var materialIdParameterName = _parameterResolver.GetParameterName(ParameterKey.MaterialId);
        foreach (var space in spaces)
        {
            for (var i = 0; i < space.Edges.Count; i++)
            {
                var edge = space.Edges[i];
                var modelWall = edge.ModelWall!;
                var axis = Enum.Parse<EntityAxis>(modelWall.Parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.PartAxis)).Value ?? string.Empty);
                if (modelWall.Position == SurfacePosition.Outside)
                {
                    var prevEdge = space.Edges[i == 0 ? space.Edges.Count - 1 : i - 1];
                    var nextEdge = space.Edges[i == space.Edges.Count - 1 ? 0 : i + 1];
                    var wall = new WallIntermediateModel
                    {
                        Id = modelWall.Id,
                        Mark = modelWall.GetParameter(materialIdParameterName),
                        Position = modelWall.Position,
                        Thickness = modelWall.Thickness,
                        Polygon = CreateWallPolygon(edge.LineString, modelWall.Thickness, 0),
                        Width = edge.LineString.Length + GetWallThickness(prevEdge.ModelWall!) + GetWallThickness(nextEdge.ModelWall!),
                        Height = space.Height,
                        BottomLevel = space.BottomLevel,
                        ThermalConductivity = materialsThermalConductivity[modelWall.GetParameter(materialIdParameterName)],
                        CardinalDirection = GetCardinalDirection(cardinalDirections, edge.LineString, _geometry.GetPolygon(modelWall, axis))
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
                                    var wall = new WallIntermediateModel
                                    {
                                        Mark = modelWall.GetParameter(materialIdParameterName),
                                        Position = modelWall.Position,
                                        Thickness = modelWall.Thickness,
                                        Polygon = CreateWallPolygon(ls, modelWall.Thickness / 2, modelWall.Thickness / 2),
                                        AdjacentSpace = anotherSpace,
                                        Width = intersection.Length,
                                        Height = space.GetVerticalIntersectionLenght(anotherSpace),
                                        BottomLevel = space.GetVerticalIntersectionLevels(anotherSpace).bottom,
                                        ThermalConductivity = materialsThermalConductivity[modelWall.GetParameter(materialIdParameterName)]
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
    
    private double GetWallThickness(LinearWallDto wall)
    {
        switch (wall.Position)
        {
            case SurfacePosition.Inside: return 0;
            case SurfacePosition.Outside: return wall.Thickness;
            default: throw new ArgumentOutOfRangeException();
        }
    }
    
    private void CreateOpenings(List<SpaceIntermediateModel> spaces, Dictionary<CardinalDirection, HeatLoss.Infrastructure.Common.Models.Vector2D> cardinalDirections)
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
                        var axis = Enum.Parse<EntityAxis>(opening.Parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.PartAxis)).Value ?? string.Empty);
                        var openingPolygon = _geometry.GetPolygon(opening, axis);
                        var intersection = wall.Polygon.Intersection(openingPolygon);
                        if (!intersection.IsEmpty)
                        {
                            wall.Openings.Add(new OpeningIntermediateModel
                            {
                                Id = Guid.NewGuid(),
                                Polygon = openingPolygon,
                                Name = opening.Name,
                                Width = opening.Width,
                                Height = opening.Height,
                                BottomLevel = opening.BasePoint.Z,
                                ThermalConductivity = double.TryParse(opening.GetParameter(_parameterResolver.GetParameterName(ParameterKey.MaterialThermalConductivity)),  NumberStyles.Any , CultureInfo.InvariantCulture,out var value) ? value : 0,
                                Type = opening.Type,
                                Mark = opening.GetParameter(_parameterResolver.GetParameterName(ParameterKey.OpeningMark)),
                                CardinalDirection = wall.Position == SurfacePosition.Outside ? GetCardinalDirection(cardinalDirections, edge.LineString, openingPolygon) : null
                            });
                        }
                    }
                }
            }
        }

        _validator.ValidateOpenings(spaces.SelectMany(x => x.Edges).SelectMany(x => x.Walls).SelectMany(x => x.Openings).ToList());
    }
    
    private void CreateFloorAreas(List<SpaceIntermediateModel> spaces, List<CoordinateGridDto> nanocadGrids, ProjectDataDto projectData)
    {
        
        var fistFloor = nanocadGrids.Single().Levels.OrderBy(x => x.Position).First(); //TODO: что если несколько сеток осей?
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
            var floor = new FloorIntermediateModel();
            var spacePolygon = UnaryUnionOp.Union(space.GetPolygon());
            if (fourthArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaIntermediateModel
                {
                    FloorAreaNumber = FloorAreaNumber.Fourth,
                    Area = Math.Round(fourthArea.Intersection(spacePolygon).Area/1000000, 2),
                    ThermalConductivity = projectData.FourthFloorAreaThermalConductivity
                });
            }
            if (thirdArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaIntermediateModel
                {
                    FloorAreaNumber = FloorAreaNumber.Third,
                    Area = Math.Round(thirdArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = projectData.ThirdFloorAreaThermalConductivity
                });
            }
            if (secondArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaIntermediateModel
                {
                    FloorAreaNumber = FloorAreaNumber.Second,
                    Area = Math.Round(secondArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = projectData.SecondFloorAreaThermalConductivity
                });
            }
            if (firstArea.Area > 0)
            {
                floor.FloorAreas.Add(new FloorAreaIntermediateModel
                {
                    FloorAreaNumber = FloorAreaNumber.First,
                    Area = Math.Round(firstArea.Intersection(spacePolygon).Area/1000000 - floor.FloorAreas.Sum(x => x.Area), 2),
                    ThermalConductivity = projectData.FirstFloorAreaThermalConductivity
                });
            }
            space.Floor = floor;
        }
    }

    private void CreateCeilings(List<SpaceIntermediateModel> spaces, List<CoordinateGridDto> nanocadGrids, List<SlabDto> nanocadSlabs, Dictionary<string, double> materialsThermalConductivity)
    {
        var spacesByBottom = spaces.GroupBy(x => x.BottomLevel).ToDictionary(x => x.Key, x => x.ToList());
        var spacesByTop = spaces.GroupBy(x => x.BottomLevel + x.Height).ToDictionary(x => x.Key, x => x.ToList());
        var slabs = nanocadGrids.Single().Levels
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
                var anotherSpaces = level.Item1 ?? new List<SpaceIntermediateModel>();
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
                            var slabIntersection = floorIntersection.Intersection(_geometry.GetPolygon(slab));
                            if (!slabIntersection.IsEmpty && slabIntersection.Area > 0)
                            {
                                var ceiling = new CeilingIntermediateModel
                                {
                                    Space = anotherSpace,
                                    Area = Math.Round(floorIntersection.Area / 1_000_000, 2),
                                    Position = SurfacePosition.Inside,
                                    Slab = slab,
                                    ThermalConductivity = materialsThermalConductivity[slab.GetParameter(_parameterResolver.GetParameterName(ParameterKey.MaterialId))],
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
                        var slabIntersection = currentSpace.GetPolygon().Intersection(_geometry.GetPolygon(slab));
                        if (!slabIntersection.IsEmpty && slabIntersection.Area > 0)
                        {
                            var topCeiling = new CeilingIntermediateModel
                            {
                                Area = Math.Round(currentSpace.GetPolygon().Area / 1_000_000, 2),
                                Position = SurfacePosition.Outside,
                                Slab = slab,
                                ThermalConductivity = materialsThermalConductivity[slab.GetParameter(_parameterResolver.GetParameterName(ParameterKey.MaterialId))],
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
    private CardinalDirection GetCardinalDirection(Dictionary<CardinalDirection, HeatLoss.Infrastructure.Common.Models.Vector2D> cardinalDirections, LineString spaceEdge, Polygon surfacePolygon)
    {
        var vect = _geometry.GetInnerPerpendicular(surfacePolygon, spaceEdge);
        
        var minAngle = Math.PI;
        var cardinalDirection = CardinalDirection.N;
        foreach (var pair in cardinalDirections)
        {
            var r = Math.Abs(vect.AngleTo(_mapper.ToVector2D(pair.Value)));
            if (r < minAngle)
            {
                minAngle = r;
                cardinalDirection = pair.Key;
            }
        }
        return cardinalDirection;
    }
}