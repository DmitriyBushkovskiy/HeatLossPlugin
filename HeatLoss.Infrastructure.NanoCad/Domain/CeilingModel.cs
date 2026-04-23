using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Infrastructure.NanoCad.RawModels;

namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class CeilingModel
{
    public double Area { get; init; }
    public SpaceModel? Space { get; init; }
    public SlabRawModel? Slab { get; init; }
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