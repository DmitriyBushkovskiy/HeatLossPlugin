using HeatLoss.Domain.Enums;
using HeatLoss.Utils.Enums;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.Models;

public class OpeningDto
{
    public Guid Id { get; set; }
    public Polygon Polygon { get; set; } = null!;
    public string Name { get; set; } = null!;
    public string Mark { get; set; } = null!;
    public double Width { get; set; }
    public double Height { get; set; }
    public double BottomLevel { get; set; }
    public double ThermalConductivity  { get; set; }
    public OpeningType Type { get; set; }
    public CardinalDirection? CardinalDirection { get; set; }
}