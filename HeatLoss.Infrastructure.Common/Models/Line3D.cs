namespace HeatLoss.Infrastructure.Common.Models;

public class Line3D: IDrawable
{
    public Point3D StartPoint { get; set; }
    public Point3D EndPoint { get; set; }
    
    public Line3D(Point3D startPoint, Point3D endPoint)
    {
        StartPoint = startPoint;
        EndPoint = endPoint;
    }
}