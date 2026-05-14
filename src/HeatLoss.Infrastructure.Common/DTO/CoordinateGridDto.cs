using HeatLoss.Infrastructure.Common.Models;

namespace HeatLoss.Infrastructure.Common.DTO;

public class CoordinateGridDto
{
    public List<GridLevel> Levels { get; init; } = new();
}