using Teigha.Geometry;

namespace HeatLoss.BimAdapters.Models;

public class ProjectDataDto
{
    public double OutsideTemperature { get; set; }
    public double FirstFloorAreaThermalConductivity { get; set; }
    public double SecondFloorAreaThermalConductivity { get; set; }
    public double ThirdFloorAreaThermalConductivity { get; set; }
    public double FourthFloorAreaThermalConductivity { get; set; }
}