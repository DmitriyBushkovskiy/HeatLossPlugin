using HeatLoss.Domain.Enums;
using HeatLoss.Infrastructure.Common.Enums;
using HeatLoss.Infrastructure.Common.Models;

namespace HeatLoss.Infrastructure.Common.DTO;

public class OpeningDto: IParametric
{
    public string Name { get; init; } = null!;
    public double Width { get; init; }
    public double Height { get; init; }
    public OpeningType Type { get; init; }
    public Point3D BasePoint { get; init; }
    public Vector3D XDir { get; init; }
    public OpeningSideType OpeningSide { get; init; }
    public double Thickness { get; init; }
    public List<Parameter> Parameters { get; set; } = new();
    
    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName).Value ?? string.Empty;
}