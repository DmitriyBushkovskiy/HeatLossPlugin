using HeatLoss.Domain.Enums;
using HeatLoss.Infrastructure.Common.DTO;

namespace HeatLoss.Application.Models;

public class CeilingIntermediateModel
{
    public double Area { get; init; }
    public SpaceIntermediateModel? Space { get; init; }
    public SlabDto? Slab { get; init; }
    public SurfacePosition Position { get; init; }
    public double ThermalConductivity { get; init; }
}