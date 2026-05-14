namespace HeatLoss.Domain.Models.Results;

public class BuildingHeatLossResult
{
    public List<SpaceHeatLossResult> Spaces { get; init; } = new();
}