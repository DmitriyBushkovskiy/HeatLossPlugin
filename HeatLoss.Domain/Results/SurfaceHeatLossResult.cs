using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Results.Enums;

namespace HeatLoss.Domain.Results;

public class SurfaceHeatLossResult: IEquatable<SurfaceHeatLossResult>
{
    public string Name { get; set; }
    public SurfaceType Type { get; init; }
    public SurfacePosition? Position { get; init; }
    public double? Width { get; set; }
    public double? Height { get; set; }
    public double Area { get; init; }
    public string Comment { get; set; } = string.Empty;
    public double TemperatureDifference { get; init; }
    public double HeatLoss { get; init; }
    public double ThermalConductivity  { get; set; } // Коэффициент R
    public double HeatTransferCoefficient  { get; set; } // Коэффициент K = 1/R
    
    public bool Equals(SurfaceHeatLossResult? other)
    {
        if (other is null) 
            return false;
        if (ReferenceEquals(this, other)) 
            return true;
        
        return Type == other.Type && 
               Position == other.Position &&
               Math.Abs(Area - other.Area) < 0.01 && 
               Math.Abs(TemperatureDifference - other.TemperatureDifference) < 0.01 && 
               Math.Abs(HeatLoss - other.HeatLoss) < 0.01;
    }

    public override bool Equals(object? obj) => Equals(obj as SurfaceHeatLossResult);

    public override int GetHashCode()
    {
        return HashCode.Combine(Type, Position, Area, TemperatureDifference, HeatLoss);
    }
    
    public static bool operator ==(SurfaceHeatLossResult? left, SurfaceHeatLossResult? right)
    {
        if (left is null)
        {
            return right is null;
        }
        return left.Equals(right);
    }

    public static bool operator !=(SurfaceHeatLossResult? left, SurfaceHeatLossResult? right) => !(left == right);
}