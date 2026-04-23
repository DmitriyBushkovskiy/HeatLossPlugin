using NetTopologySuite.Geometries;
using Teigha.DatabaseServices;
using Teigha.Geometry;

namespace HeatLoss.Infrastructure.NanoCad.Extensions;

public static class LineStringExtensions
{
    public static Line ToLine(this LineString lineString, double Z)
    {
        return new Line
        {
            StartPoint = new Point3d(lineString.StartPoint.X, lineString.StartPoint.Y, Z),
            EndPoint = new Point3d(lineString.EndPoint.X, lineString.EndPoint.Y, Z),
        };
    }
}