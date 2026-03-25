namespace HeatLoss.Domain.Calculation;

public class Space
{
    public string Number { get; init; }
    public string Name { get; init; }
    public List<FloorArea> FloorAreas { get; set; }
    public List<Ceiling> Ceilings { get; init; } = new();
    public List<Wall> Walls { get; set; } = new();
    public double Temperature { get; set; }
}