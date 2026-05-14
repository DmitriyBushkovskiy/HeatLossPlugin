using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Models;

public class Wall
{
    public string Mark { get; init; } = null!;
    public IEnumerable<Opening> Openings { get; init; } = null!;
    public SurfacePosition Position { get; init; }
    public CardinalDirection? CardinalDirection { get; init; }
    public double Width { get; init; }
    public double Height { get; init; }
    public string? AdjacentSpaceNumber  { get; init; }
    public double ThermalConductivity  { get; init; }
}