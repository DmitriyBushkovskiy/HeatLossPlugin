using BIMStructureMgd.DatabaseObjects;
using NetTopologySuite.Geometries;
using Teigha.Geometry;

namespace HeatLoss.BimAdapters.Extensions;

public static class BuildingOpeningExtensions
{
    public static Polygon GetPolygon(this BuildingOpening opening)
    {
        var endPoint = opening.BasePoint + opening.XDir * opening.Width;
        var perpVector = opening.XDir.RotateBy( (opening.OpeningSide == BuildingOpening.OpeningSideType.Inside ? 1 : -1) * Math.PI / 2, Vector3d.ZAxis) * opening.Thickness;
        var perpStartPoint = opening.BasePoint + perpVector;
        var perpEndPoint = endPoint + perpVector;
        return new Polygon(new LinearRing(new[]
        {
            new Coordinate(opening.BasePoint.X, opening.BasePoint.Y),
            new Coordinate(endPoint.X, endPoint.Y),
            new Coordinate(perpEndPoint.X, perpEndPoint.Y),
            new Coordinate(perpStartPoint.X, perpStartPoint.Y),
            new Coordinate(opening.BasePoint.X, opening.BasePoint.Y),
        }));
    }
}