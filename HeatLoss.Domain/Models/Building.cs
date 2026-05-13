namespace HeatLoss.Domain.Models;

public class Building
{
    public double OutsideTemperature { get; init; }
    public double BuildingHeight { get; init; }
    public double WindSpeed { get; init; }
    public double WindwardAerodynamicCoefficient { get; init; }
    public double DownwindAerodynamicCoefficient { get; init; }
    public double WindPressureCoefficient { get; init; }
    public List<Space> Spaces { get; init; } = new();
}