using HeatLoss.Domain.Surfaces;
using HeatLoss.Infrastructure.Common.DTO;
using NetTopologySuite.Geometries;

namespace HeatLoss.Application.Models;

public class SpaceIntermediateModel
{
    public long Id { get; set; }
    public string Number { get; init; } = null!;
    public string Name { get; init; } = null!;
    public FloorIntermediateModel? Floor { get; set; }
    public List<CeilingIntermediateModel> Ceiling { get; } = new();
    public List<SpaceEdgeIntermediateModel> Edges { get; } = new();
    public double BottomLevel  { get; init; }
    public double Height { get; init; }
    public double Temperature { get; init; }
    
    public Polygon GetPolygon()
    {
        var coordinates = Edges.Select(x => x.Start).ToList();
        coordinates.Add(coordinates.First());
        return new Polygon(new LinearRing(coordinates.ToArray()));
    }

    public double GetVerticalIntersectionLenght(SpaceIntermediateModel anotherSpaceIntermediate)
    {
        var (bottom, top) = GetVerticalIntersectionLevels(anotherSpaceIntermediate);
        return top - bottom;
    }
    
    public (double bottom, double top) GetVerticalIntersectionLevels(SpaceIntermediateModel anotherSpaceIntermediate)
    {
        return (Math.Max(BottomLevel , anotherSpaceIntermediate.BottomLevel), Math.Min(BottomLevel + Height, anotherSpaceIntermediate.BottomLevel + anotherSpaceIntermediate.Height));
    }

    public bool HaveVerticalIntersection(SpaceIntermediateModel anotherSpaceIntermediate)
    {
        return GetVerticalIntersectionLenght(anotherSpaceIntermediate) > 0;
    }
    
    private (double bottom, double top) GetVerticalIntersectionLevels(LinearWallDto wallRaw)
    {
        return (Math.Max(BottomLevel , wallRaw.BasePoint.Z), Math.Min(BottomLevel + Height, wallRaw.BasePoint.Z + wallRaw.Height));
    }
    
    public bool HaveVerticalIntersection(LinearWallDto wallRaw)
    {
        var (bottom, top) = GetVerticalIntersectionLevels(wallRaw);
        return top - bottom > 0;
    }
    
    public bool IsOpeningBelong(OpeningDto openingRaw)
    {
        return openingRaw.BasePoint.Z >= BottomLevel && openingRaw.BasePoint.Z + openingRaw.Height <= BottomLevel + Height;
    }
}