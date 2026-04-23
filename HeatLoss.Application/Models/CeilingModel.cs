using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Infrastructure.Common.DTO;

namespace HeatLoss.Application.Models;

public class CeilingModel
{
    public double Area { get; init; }
    public SpaceModel? Space { get; init; }
    public SlabDto? Slab { get; init; }
    public SurfacePosition Position { get; init; }
    public double ThermalConductivity { get; init; }
    
    public Ceiling ToCeiling()
    {
        return new Ceiling
        {
            Area = Area,
            Position = Position,
            ThermalConductivity =  ThermalConductivity,
            AdjacentSpaceNumber = Space?.Number,
        };
    }
}