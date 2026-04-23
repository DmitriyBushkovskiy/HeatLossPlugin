using HeatLoss.Domain.Surfaces;
using HeatLoss.Infrastructure.NanoCad.RawModels;
using NetTopologySuite.Geometries;

namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class SpaceModel
{
    public long Id { get; set; }
    public string Number { get; init; } = null!;
    public string Name { get; init; } = null!;
    public FloorModel? Floor { get; set; }
    public List<CeilingModel> Ceiling { get; } = new();
    public List<SpaceEdgeModel> Edges { get; } = new();
    public double BottomLevel  { get; init; }
    public double Height { get; init; }
    public double Temperature { get; init; }
    
    public Polygon GetPolygon()
    {
        var coordinates = Edges.Select(x => x.Start).ToList();
        coordinates.Add(coordinates.First());
        return new Polygon(new LinearRing(coordinates.ToArray()));
    }

    public double GetVerticalIntersectionLenght(SpaceModel anotherSpace)
    {
        var (bottom, top) = GetVerticalIntersectionLevels(anotherSpace);
        return top - bottom;
    }
    
    public (double bottom, double top) GetVerticalIntersectionLevels(SpaceModel anotherSpace)
    {
        return (Math.Max(BottomLevel , anotherSpace.BottomLevel), Math.Min(BottomLevel + Height, anotherSpace.BottomLevel + anotherSpace.Height));
    }

    public bool HaveVerticalIntersection(SpaceModel anotherSpace)
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
    
    private (double bottom, double top) GetVerticalIntersectionLevels(LinearWallRawModel wallRaw)
    {
        return (Math.Max(BottomLevel , wallRaw.BasePoint.Z), Math.Min(BottomLevel + Height, wallRaw.BasePoint.Z + wallRaw.Height));
    }
    
    public bool HaveVerticalIntersection(LinearWallRawModel wallRaw)
    {
        var (bottom, top) = GetVerticalIntersectionLevels(wallRaw);
        return top - bottom > 0;
    }
    
    public bool IsOpeningBelong(OpeningRawModel openingRaw)
    {
        return openingRaw.BasePoint.Z >= BottomLevel && openingRaw.BasePoint.Z + openingRaw.Height <= BottomLevel + Height;
    }
}