using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Surfaces;

public class FloorArea
{
    public FloorAreaNumber FloorAreaNumber { get; }
    public double Area { get; }
    public double ThermalConductivity  { get; }

    public FloorArea(FloorAreaNumber floorAreaNumber, double area, double thermalConductivity)
    {
        FloorAreaNumber = floorAreaNumber;
        Area = area;
        ThermalConductivity = thermalConductivity;
    }
}