using BIMStructureMgd.DatabaseObjects;
using HeatLoss.NanoCadAdapter.Extensions;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Surfaces;

namespace HeatLoss.NanoCadAdapter.DTO;

public class CeilingDto
{
    public double Area { get; init; }
    public SpaceDto? Space { get; init; }
    public BuildingSlab? Slab { get; init; }
    public SurfacePosition Position { get; init; }
    public double ThermalConductivity { get; init; }
    
    public Ceiling ToCeiling()
    {
        return new Ceiling
        {
            Mark = Slab?.GetParameter("BUILD_MATERIAL_ID") ?? string.Empty,
            Area = Area,
            Position = Position,
            ThermalConductivity =  ThermalConductivity,
            AdjacentSpaceNumber = Space?.Number,
        };
    }
}