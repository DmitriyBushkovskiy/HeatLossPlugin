using HeatLoss.Domain.Enums;

namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class FloorAreaModel
{
    public FloorAreaNumber FloorAreaNumber { get; init; }
    public double Area { get; init; }
    public double ThermalConductivity  { get; init; }
}