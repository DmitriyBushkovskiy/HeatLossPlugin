using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Models;

public class Ceiling
{
    public string Mark { get; init; } = null!;
    public double Area { get; init; }
    public string? AdjacentSpaceNumber  { get; init; }
    public SurfacePosition Position { get; init; }
    public double ThermalConductivity { get; init; }
}