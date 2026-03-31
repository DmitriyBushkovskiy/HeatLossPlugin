using HeatLoss.Domain.Enums;

namespace HeatLoss.BimAdapters.Models;

public class FloorAreaDto
{
    public FloorAreaNumber FloorAreaNumber { get; init; }
    public double Area { get; init; }
    public double ThermalConductivity  { get; set; }
}