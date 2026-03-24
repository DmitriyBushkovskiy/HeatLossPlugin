using HeatLoss.BimAdapters.Models;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.DTO;

public class OpeningDto
{
    public Guid Id { get; set; }
    public Polygon Polygon { get; set; }
    public string Name { get; set; }
    public double Width { get; set; }
    public double Height { get; set; }
    public double BottomLevel { get; set; }
    public double ThermalConductivity  { get; set; }
    public OpeningType Type { get; set; }
}