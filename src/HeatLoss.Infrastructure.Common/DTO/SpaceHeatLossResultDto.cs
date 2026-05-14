namespace HeatLoss.Infrastructure.Common.DTO;

public class SpaceHeatLossResultDto
{
    public string Number { get; init; } = null!;
    public string Name { get; init; } = null!;
    public double TotalHeatLoss { get; init; }
}