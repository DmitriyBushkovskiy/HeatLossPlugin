namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class ProjectDataModel
{
    public double OutsideTemperature { get; init; }
    public double FirstFloorAreaThermalConductivity { get; init; }
    public double SecondFloorAreaThermalConductivity { get; init; }
    public double ThirdFloorAreaThermalConductivity { get; init; }
    public double FourthFloorAreaThermalConductivity { get; init; }
}