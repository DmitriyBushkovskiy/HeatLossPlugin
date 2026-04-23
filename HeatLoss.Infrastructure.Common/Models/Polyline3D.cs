namespace HeatLoss.Infrastructure.Common.Models;

public class Polyline3D: IDrawable
{
    public List<Line3D> Lines { get; set; }
    
    public Polyline3D(List<Line3D> lines)
    {
        Lines = lines;
    }
}