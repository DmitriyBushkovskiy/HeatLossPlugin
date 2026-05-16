namespace HeatLoss.Infrastructure.Common.Models;

public struct Point2D
{
    public double X { get; }
    public double Y { get; }

    public Point2D(double x, double y)
    {
        X = x;
        Y = y;
    }
    
    public static Point2D operator +(Point2D p, Vector2D v)
    {
        return new Point2D(p.X + v.X, p.Y + v.Y);
    }
}