using HeatLoss.Domain.Enums;

namespace HeatLoss.Application.Models;

public class FloorAreaIntermediateModel
{
    public FloorAreaNumber FloorAreaNumber { get; init; }
    public double Area { get; init; }
    public double ThermalConductivity  { get; init; }
}