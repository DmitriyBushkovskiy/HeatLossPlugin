using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Infrastructure.NanoCad.RawModels;
using NetTopologySuite.Geometries;

namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class WallModel
{
    public long Id  { get; set; }
    public string Mark { get; init; } = null!;
    public Polygon Polygon { get; init; } = null!;
    public List<OpeningModel> Openings { get; set; } = new();
    public SurfacePosition Position { get; init; }
    public CardinalDirection? CardinalDirection { get; init; }
    public double Thickness { get; init; }
    public double Width { get; init; }
    public double Height { get; init; }
    public double BottomLevel { get; init; }
    public SpaceModel? AdjacentSpace  { get; init; } // смежное помещение для внутренней стены
    public double ThermalConductivity  { get; init; }

    public bool IsOpeningBelong(OpeningRawModel openingRaw)
    {
        return openingRaw.BasePoint.Z >= BottomLevel && openingRaw.BasePoint.Z + openingRaw.Height <= BottomLevel + Height;
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