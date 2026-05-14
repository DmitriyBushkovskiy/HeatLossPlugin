using HeatLoss.Infrastructure.Common.Models;

namespace HeatLoss.Infrastructure.Common.DTO;

public class SpaceDto: IParametric
{
    public long Id { get; init; }
    public string Name { get; init; } = null!;
    public string Number { get; init; } = null!;
    public double BottomLevel { get; init; }
    public double Height { get; init; }
    public List<Point3D> Coordinates { get; init; } = new();
    public List<Parameter> Parameters { get; set; } = new();

    //TODO: параметр HL_SPACE_TEMPERATURE добавляется к помещениям вручную
    
    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName).Value ?? string.Empty;
}