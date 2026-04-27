namespace HeatLoss.Infrastructure.Common.DTO;

public class BuildingHeatLossResultDto
{
    public List<SpaceHeatLossResultDto> Spaces { get; init; } = new();
}