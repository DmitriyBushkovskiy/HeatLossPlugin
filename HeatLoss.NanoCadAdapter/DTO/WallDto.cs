using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Surfaces;
using NetTopologySuite.Geometries;

namespace HeatLoss.NanoCadAdapter.DTO;

public class WallDto
{
    public long Id  { get; set; }
    public string Mark { get; init; } = null!;
    public Polygon Polygon { get; init; } = null!;
    public List<OpeningDto> Openings { get; set; } = new();
    public SurfacePosition Position { get; init; }
    public CardinalDirection? CardinalDirection { get; init; }
    public double Thickness { get; init; }
    public double Width { get; init; }
    public double Height { get; init; }
    public double BottomLevel { get; init; }
    public SpaceDto? AdjacentSpace  { get; init; } // смежное помещение для внутренней стены
    public double ThermalConductivity  { get; init; }

    public bool IsOpeningBelong(BuildingOpening opening)
    {
        return opening.BasePoint.Z >= BottomLevel && opening.BasePoint.Z + opening.Height <= BottomLevel + Height;
    }
    
    public Wall ToWall()
    {
        return new Wall
        {
            Mark = Mark,
            Position = Position,
            Width = Width,
            Height = Height,
            AdjacentSpaceNumber = AdjacentSpace?.Number,
            ThermalConductivity = ThermalConductivity,
            Openings = Openings.Select(x => x.ToOpening()).ToList(),
            CardinalDirection = CardinalDirection
        };
    }
}