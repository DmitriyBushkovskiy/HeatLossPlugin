using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Calculation;

public class FloorArea
{
    public FloorAreaNumber FloorAreaNumber { get; init; }
    public double Area { get; init; }

    public FloorArea(FloorAreaNumber floorAreaNumber, double area)
    {
        FloorAreaNumber = floorAreaNumber;
        Area = area;
    }
}