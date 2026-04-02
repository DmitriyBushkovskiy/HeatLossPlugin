using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Surfaces;

public class Opening
{
    public string Name { get; init; } = null!;
    public string Mark { get; init; } = null!;
    public double Width { get; init; }
    public double Height { get; init; }
    public double BottomLevel { get; init; }
    public double ThermalConductivity  { get; init; }
    public OpeningType Type { get; init; }
    public CardinalDirection? CardinalDirection { get; init; }
}