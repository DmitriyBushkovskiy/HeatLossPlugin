using BIMStructureMgd.DatabaseObjects;

namespace HeatLoss.BimAdapters.DTO;

public class CeilingDto
{
    public double Area { get; set; }
    public SpaceDto? Space { get; set; }
    public BuildingSlab? Slab { get; set; }
    public SurfacePosition Position { get; set; }
}