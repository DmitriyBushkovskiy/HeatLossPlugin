using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Infrastructure.Common.DTO;
using NetTopologySuite.Geometries;

namespace HeatLoss.Application.Models;

public class WallIntermediateModel
{
    public long Id  { get; set; }
    public string Mark { get; init; } = null!;
    public Polygon Polygon { get; init; } = null!;
    public List<OpeningIntermediateModel> Openings { get; set; } = new();
    public SurfacePosition Position { get; init; }
    public CardinalDirection? CardinalDirection { get; init; }
    public double Thickness { get; init; }
    public double Width { get; init; }
    public double Height { get; init; }
    public double BottomLevel { get; init; }
    public SpaceIntermediateModel? AdjacentSpace  { get; init; } // смежное помещение для внутренней стены
    public double ThermalConductivity  { get; init; }

    public bool IsOpeningBelong(OpeningDto openingRaw)
    {
        return openingRaw.BasePoint.Z >= BottomLevel && openingRaw.BasePoint.Z + openingRaw.Height <= BottomLevel + Height;
    }
}