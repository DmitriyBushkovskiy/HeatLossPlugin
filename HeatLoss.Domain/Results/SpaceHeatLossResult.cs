namespace HeatLoss.Domain.Results;

public class SpaceHeatLossResult
{
    public string Number { get; init; } = null!;
    public string Name { get; init; } = null!;
    public double Temperature { get; init; }
    public List<SurfaceHeatLossResult> Surfaces { get; init; } = new();
    public double TotalHeatLoss { get; set; }
}