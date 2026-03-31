using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Calculation;

public class FloorArea
{
    public FloorAreaNumber FloorAreaNumber { get; init; }
    public double Area { get; init; }
    public double ThermalConductivity  { get; set; }

    public FloorArea(FloorAreaNumber floorAreaNumber, double area, double thermalConductivity)
    {
        FloorAreaNumber = floorAreaNumber;
        Area = area;
        ThermalConductivity = thermalConductivity;
    }
}