using HeatLoss.Domain.Results.Enums;

namespace HeatLoss.Domain.Results;

public class SurfaceHeatLossResult
{
    public string Name { get; set; }
    public SurfaceType Type { get; init; }
    public double Area { get; init; }
    public string Comment { get; set; } = string.Empty;
    public double TemperatureDifference { get; init; }
    public double HeatLoss { get; init; }
    public double ThermalConductivity  { get; set; } // Коэффициент R
    public double HeatTransferCoefficient  { get; set; } // Коэффициент K = 1/R
}