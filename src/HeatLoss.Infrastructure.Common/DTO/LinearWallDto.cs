using HeatLoss.Domain.Enums;
using HeatLoss.Infrastructure.Common.Models;

namespace HeatLoss.Infrastructure.Common.DTO;

public class LinearWallDto: IParametric
{
    public long Id { get; init; }
    public Point3D StartPoint { get; init; }
    public Point3D EndPoint { get; init; }
    public Point3D BasePoint { get; init; }
    public double Thickness  { get; init; }
    public double Height  { get; init; }
    public SurfacePosition Position { get; init; }
    public string MaterialId { get; set; } = null!;
    public List<Parameter> Parameters { get; set; } = new();

    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName).Value ?? string.Empty;
}