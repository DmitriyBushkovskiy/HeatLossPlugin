namespace HeatLoss.Infrastructure.Common.Models;

public struct Vector2D
{
    public double X { get; }
    public double Y { get; }
    
    public Vector2D(double x, double y)
    {
        X = x;
        Y = y;
    }
    
    public static Vector2D operator *(Vector2D v, double scalar)
    {
        return new Vector2D(v.X * scalar, v.Y * scalar);
    }
    
    public static Vector2D operator *(double scalar, Vector2D v)
    {
        return v * scalar;
    }
}

public static class Vector2DExtensions
{
    public static Vector2D Rotate(this Vector2D v, float angle)
    {
        var sin = MathF.Sin(angle);
        var cos = MathF.Cos(angle);
    
        return new Vector2D(
            v.X * cos - v.Y * sin,
            v.X * sin + v.Y * cos
        );
    }
}