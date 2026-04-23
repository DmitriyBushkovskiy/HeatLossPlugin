namespace HeatLoss.Infrastructure.Common.Models;

public struct Vector3D
{
    public double X { get; }
    public double Y { get; }
    public double Z { get; }
    
    public Vector3D(double x, double y, double z)
    {
        X = x;
        Y = y;
        Z = z;
    }
    
    public static Vector3D operator *(Vector3D v, double scalar)
    {
        return new Vector3D(v.X * scalar, v.Y * scalar, v.Z * scalar);
    }
    
    public static Vector3D operator *(double scalar, Vector3D v)
    {
        return v * scalar;
    }
}