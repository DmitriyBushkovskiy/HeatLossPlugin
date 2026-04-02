namespace HeatLoss.Domain.Surfaces;

public class Building
{
    public double OutsideTemperature { get; init; }
    public List<Space> Spaces { get; init; } = new();
}