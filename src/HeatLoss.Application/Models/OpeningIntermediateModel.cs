using HeatLoss.Domain.Enums;
using NetTopologySuite.Geometries;

namespace HeatLoss.Application.Models;

public class OpeningIntermediateModel
{
    public Guid Id { get; set; }
    public Polygon Polygon { get; set; } = null!;
    public string Name { get; init; } = null!;
    public string Mark { get; init; } = null!;
    public double Width { get; init; }
    public double Height { get; init; }
    public double BottomLevel { get; init; }
    public double ThermalConductivity  { get; init; }
    public OpeningType Type { get; init; }
    public CardinalDirection? CardinalDirection { get; init; }
    public double AirPermeabilityResistance { get; init; } //R
}