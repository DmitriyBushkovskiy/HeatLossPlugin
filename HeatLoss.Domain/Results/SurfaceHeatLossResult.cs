using HeatLoss.Domain.Results.Enums;

namespace HeatLoss.Domain.Results;

public class SurfaceHeatLossResult
{
    public SurfaceType Type { get; init; }
    public double Area { get; init; }
    public double HeatLoss { get; init; }
}