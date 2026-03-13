namespace HeatLoss.Domain.Results;

public class SpaceHeatLossResult
{
    public string Number { get; init; }
    public string Name { get; init; }
    public List<SurfaceHeatLossResult> Surfaces { get; init; }
    public double TotalHeatLossInWatt { get; init; } //TODO: rename?
}