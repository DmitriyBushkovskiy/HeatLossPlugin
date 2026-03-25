using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Domain.Enums;

namespace HeatLoss.BimAdapters.Models;

public class CeilingDto
{
    public double Area { get; set; }
    public SpaceDto? Space { get; set; }
    public BuildingSlab? Slab { get; set; }
    public SurfacePosition Position { get; set; }
    public double ThermalConductivity { get; set; }
}