using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Surfaces;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.DTO;

public class OpeningDto
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
    
    public Opening ToOpening()
    {
        return new Opening
        {
            Name = Name,
            Mark = Mark,
            Width = Width,
            Height = Height,
            Type = Type,
            BottomLevel =  BottomLevel,
            ThermalConductivity =  ThermalConductivity,
            CardinalDirection = CardinalDirection
        };
    }
}