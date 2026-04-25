using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Models.Results;

public class SurfaceHeatLossResult: IEquatable<SurfaceHeatLossResult>
{
    public string Name { get; init; } = null!;
    public string Mark { get; init; } = null!;
    public SurfaceType Type { get; init; }
    public SurfacePosition? Position { get; init; }
    public CardinalDirection? CardinalDirection { get; init; }
    public double? Width { get; init; }
    public double? Height { get; init; }
    public double Area { get; init; }
    public string? AdjacentSpaceNumber  { get; init; }
    public string Comment { get; set; } = string.Empty;
    public double TemperatureDifference { get; init; }
    public double HeatLoss { get; init; }
    public double ThermalConductivity  { get; init; } // Коэффициент R
    public double HeatTransferCoefficient  { get; init; } // Коэффициент K = 1/R
    public double AdditionalCoefficient { get; init; } = 1.0;
    
    public bool Equals(SurfaceHeatLossResult? other)
    {
        if (other is null) 
            return false;
        if (ReferenceEquals(this, other)) 
            return true;
        
        return Type == other.Type && 
               Position == other.Position &&
               AdjacentSpaceNumber == other.AdjacentSpaceNumber &&
               CardinalDirection == other.CardinalDirection &&
               Math.Abs(Area - other.Area) < 0.01 && 
               Math.Abs(TemperatureDifference - other.TemperatureDifference) < 0.01 && 
               Math.Abs(HeatLoss - other.HeatLoss) < 0.01;
    }

    public override bool Equals(object? obj) => Equals(obj as SurfaceHeatLossResult);

    public override int GetHashCode()
    {
        return HashCode.Combine(Type, Position, Area, TemperatureDifference, HeatLoss, AdjacentSpaceNumber, CardinalDirection);
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