using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Geometry.Extensions;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.Extensions;

public static class BuildingSlabExtensions
{
    public static IEnumerable<Coordinate> GetCoordinates(this BuildingSlab slab)
    {
        return slab.GetContour()
            .ConvertTo(false)
            .GetVertex2ds()
            .Select(x => new Coordinate(x.Position.X, x.Position.Y).Round());
    }
    
    public static Polygon GetPolygon(this BuildingSlab slab)
    {
        var slabCoordinates = slab.GetCoordinates().ToList();
        slabCoordinates.Add(slabCoordinates.First());
        return new Polygon(new LinearRing(slabCoordinates.ToArray()));
    }
}