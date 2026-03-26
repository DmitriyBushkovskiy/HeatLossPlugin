namespace HeatLoss.Domain.Calculation;

public class Building
{
    public double OutsideTemperature { get; init; }
    public List<Space> Spaces { get; set; } = new();
}