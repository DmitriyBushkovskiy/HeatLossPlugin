using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Calculation;

public class Opening
{
    public string Name { get; set; } = null!;
    public string Mark { get; set; } = null!;
    public double Width { get; set; }
    public double Height { get; set; }
    public double BottomLevel { get; set; }
    public double ThermalConductivity  { get; set; }
    public OpeningType Type { get; set; }
    public CardinalDirection? CardinalDirection { get; set; }
}