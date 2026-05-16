namespace HeatLoss.Infrastructure.Common.Models;

public class GridLevel
{
    public string Name { get; set; }
    public double Position { get; set; }

    public GridLevel(string name, double position)
    {
        Name = name;
        Position = position;
    }
}