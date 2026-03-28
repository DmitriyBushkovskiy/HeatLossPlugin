using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Domain.Enums;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.Models;

public class WallDto
{
    public long Id  { get; set; }
    public string Mark { get; set; } = null!;
    public Polygon Polygon { get; set; } = null!;
    public List<OpeningDto> Openings { get; set; } = new();
    public SurfacePosition Position { get; set; }
    public double Thickness { get; set; }
    public double Width { get; set; }
    public double Height { get; set; }
    public double BottomLevel { get; set; }
    public SpaceDto? AdjacentSpace  { get; set; } // смежное помещение для внутренней стены
    public double ThermalConductivity  { get; set; }

    public bool IsOpeningBelong(BuildingOpening opening)
    {
        return opening.BasePoint.Z >= BottomLevel && opening.BasePoint.Z + opening.Height <= BottomLevel + Height;
    }
}