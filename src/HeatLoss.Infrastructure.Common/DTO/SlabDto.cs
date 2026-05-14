using HeatLoss.Infrastructure.Common.Models;

namespace HeatLoss.Infrastructure.Common.DTO;

public class SlabDto: IParametric
{
    public Point3D BasePoint { get; init; }
    public List<Parameter> Parameters { get; set; } = new();
    public List<Point3D> Coordinates { get; init; } = new();
    
    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName).Value ?? string.Empty;
}