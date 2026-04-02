namespace HeatLoss.BimAdapters.DTO;

public class ProjectDataDto
{
    public double OutsideTemperature { get; init; }
    public double FirstFloorAreaThermalConductivity { get; init; }
    public double SecondFloorAreaThermalConductivity { get; init; }
    public double ThirdFloorAreaThermalConductivity { get; init; }
    public double FourthFloorAreaThermalConductivity { get; init; }
}