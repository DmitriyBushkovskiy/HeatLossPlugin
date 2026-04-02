using HeatLoss.Domain.Enums;

namespace HeatLoss.BimAdapters.DTO;

public class FloorAreaDto
{
    public FloorAreaNumber FloorAreaNumber { get; init; }
    public double Area { get; init; }
    public double ThermalConductivity  { get; init; }
}