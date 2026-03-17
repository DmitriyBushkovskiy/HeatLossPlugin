using BIMStructureMgd.DatabaseObjects;
using HeatLoss.BimAdapters.Extensions;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.DTO;

public class SpaceDto
{
    private readonly SpaceEntity _spaceEntity;
    public long Id { get; }
    public string Number { get; init; }
    public string Name { get; init; }
    // public List<WallDto> Walls { get; init; }
    // public List<OpeningDto> Openings { get; init; }
    // public FloorDto Floor { get; init; }
    // public CeilingDto Ceiling { get; init; }
    public List<SpaceEdgeDto> Edges { get; set; } = new();
    public double BottomLevel  { get; set; }
    public double Height { get; set; }
    
    public SpaceDto(SpaceEntity spaceEntity)
    {
        _spaceEntity = spaceEntity;
        Id = spaceEntity.Id.ToLong();
        // Sides = ItitSides();
        Name = spaceEntity.Name;
        Number = spaceEntity.Number;
        BottomLevel = spaceEntity.GetBottomLevel();
        Height = spaceEntity.Height;
    }
    
    public Polygon GetPolygon()
    {
        var r = Edges.Select(x => x.Start).ToList();
        r.Add(r.First());
        return new Polygon(new LinearRing(r.ToArray()));
    }

    public double GetVerticalIntersectionLenght(SpaceDto anotherSpace)
    {
        var (bottom, top) = GetVerticalIntersectionLevels(anotherSpace);
        return top - bottom;
    }
    
    public (double bottom, double top) GetVerticalIntersectionLevels(SpaceDto anotherSpace)
    {
        return (Math.Max(BottomLevel , anotherSpace.BottomLevel), Math.Min(BottomLevel + Height, anotherSpace.BottomLevel +  anotherSpace.Height));
    }

    public bool HaveVerticalIntersection(SpaceDto anotherSpace)
    {
        return GetVerticalIntersectionLenght(anotherSpace) > 0;
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