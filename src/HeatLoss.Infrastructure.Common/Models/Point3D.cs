namespace HeatLoss.Infrastructure.Common.Models;

public struct Point3D
{
    public double X { get; }
    public double Y { get; }
    public double Z { get; }

    public Point3D(double x, double y, double z)
    {
        X = x;
        Y = y;
        Z = z;
    }
    
    public static Point3D operator +(Point3D p, Vector3D v)
    {
        return new Point3D(p.X + v.X, p.Y + v.Y, p.Z + v.Z);
    }
}

public static class Point3DExtensions
{
    public static Point3D Round(this Point3D point)
    {
        return new Point3D(Math.Round(point.X), Math.Round(point.Y), Math.Round(point.Z));
    }
}