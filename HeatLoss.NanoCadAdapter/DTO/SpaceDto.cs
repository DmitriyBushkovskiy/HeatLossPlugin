using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Domain.Surfaces;
using NetTopologySuite.Geometries;

namespace HeatLoss.NanoCadAdapter.DTO;

public class SpaceDto
{
    public long Id { get; set; }
    public string Number { get; init; } = null!;
    public string Name { get; init; } = null!;
    public FloorDto? Floor { get; set; }
    public List<CeilingDto> Ceiling { get; } = new();
    public List<SpaceEdgeDto> Edges { get; } = new();
    public double BottomLevel  { get; init; }
    public double Height { get; init; }
    public double Temperature { get; init; }
    
    public Polygon GetPolygon()
    {
        var coordinates = Edges.Select(x => x.Start).ToList();
        coordinates.Add(coordinates.First());
        return new Polygon(new LinearRing(coordinates.ToArray()));
    }

    public double GetVerticalIntersectionLenght(SpaceDto anotherSpace)
    {
        var (bottom, top) = GetVerticalIntersectionLevels(anotherSpace);
        return top - bottom;
    }
    
    public (double bottom, double top) GetVerticalIntersectionLevels(SpaceDto anotherSpace)
    {
        return (Math.Max(BottomLevel , anotherSpace.BottomLevel), Math.Min(BottomLevel + Height, anotherSpace.BottomLevel + anotherSpace.Height));
    }

    public bool HaveVerticalIntersection(SpaceDto anotherSpace)
    {
        return GetVerticalIntersectionLenght(anotherSpace) > 0;
    }
    
    public Space ToSpace()
    {
        return new Space
        {
            Number = Number,
            Name = Name,
            Temperature = Temperature,
            Walls = Edges.SelectMany(x => x.Walls).Select(x => x.ToWall()).ToList(),
            FloorAreas = Floor?.ToFloorAreas() ?? new List<FloorArea>(),
            Ceilings = Ceiling.Select(x => x.ToCeiling()).ToList(),
        };
    }
    
    private (double bottom, double top) GetVerticalIntersectionLevels(LinearBuildingWall wall)
    {
        return (Math.Max(BottomLevel , wall.BasePoint.Z), Math.Min(BottomLevel + Height, wall.BasePoint.Z + wall.Height));
    }
    
    public bool HaveVerticalIntersection(LinearBuildingWall wall)
    {
        var (bottom, top) = GetVerticalIntersectionLevels(wall);
        return top - bottom > 0;
    }
    
    public bool IsOpeningBelong(BuildingOpening opening)
    {
        return opening.BasePoint.Z >= BottomLevel && opening.BasePoint.Z + opening.Height <= BottomLevel + Height;
    }
}