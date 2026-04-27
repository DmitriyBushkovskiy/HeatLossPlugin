using HeatLoss.Infrastructure.Common.Models;
using Teigha.Geometry;

namespace HeatLoss.Infrastructure.NanoCad.Extensions;

public static class Point3DExtensions
{
    public static Point3d ToPoint3d(this Point3D point3D)
    {
        return new Point3d(point3D.X, point3D.Y, point3D.Z);
    }
}