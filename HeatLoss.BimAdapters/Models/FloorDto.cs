using HeatLoss.Domain.Enums;

namespace HeatLoss.BimAdapters.Models;

public class FloorDto
{
    public List<FloorAreaDto> FloorAreas { get; init; } = new();
}