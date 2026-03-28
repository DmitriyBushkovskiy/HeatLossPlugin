using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Calculation;

public class Ceiling
{
    public string Mark { get; set; } = null!;
    public double Area { get; set; }
    public string? AdjacentSpaceNumber  { get; set; }
    public SurfacePosition Position { get; set; }
    public double ThermalConductivity { get; set; }
}