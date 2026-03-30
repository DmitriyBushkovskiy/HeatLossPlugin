using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Calculation;

public class Wall
{
    public string Mark { get; set; } = null!;
    public List<Opening> Openings { get; set; } = new();
    public SurfacePosition Position { get; set; }
    public CardinalDirection? CardinalDirection { get; set; }
    public double Width { get; set; }
    public double Height { get; set; }
    public string? AdjacentSpaceNumber  { get; set; }
    public double ThermalConductivity  { get; set; }
}