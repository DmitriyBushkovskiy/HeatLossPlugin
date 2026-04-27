namespace HeatLoss.Domain.Models;

public class Space
{
    public string Number { get; init; } = null!;
    public string Name { get; init; } = null!;
    public List<FloorArea> FloorAreas { get; init; } = new();
    public List<Ceiling> Ceilings { get; init; } = new();
    public List<Wall> Walls { get; init; } = new();
    public double Temperature { get; init; }
}