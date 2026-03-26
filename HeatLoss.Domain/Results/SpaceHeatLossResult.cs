namespace HeatLoss.Domain.Results;

public class SpaceHeatLossResult
{
    public string Number { get; init; }
    public string Name { get; init; }
    public List<SurfaceHeatLossResult> Surfaces { get; init; } = new();
    public double TotalHeatLoss { get; set; }
}