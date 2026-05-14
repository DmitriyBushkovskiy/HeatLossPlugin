using NetTopologySuite.Geometries;

namespace HeatLoss.Geometry.Extensions;

public static class CoordinateExtensions
{
    public static Coordinate Round(this Coordinate coordinate)
    {
        return new Coordinate(Math.Round(coordinate.X), Math.Round(coordinate.Y));
    }
}