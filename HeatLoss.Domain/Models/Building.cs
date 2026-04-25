namespace HeatLoss.Domain.Models;

public class Building
{
    public double OutsideTemperature { get; init; }
    public List<Space> Spaces { get; init; }
    
    public Building(double outsideTemperature, List<Space> spaces)
    {
        OutsideTemperature = outsideTemperature;
        Spaces = spaces;
    }
}