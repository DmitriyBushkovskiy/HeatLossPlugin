namespace HeatLoss.Infrastructure.Common;

public interface IParameterResolver
{
    string GetParameterName(ParameterKey key);
}

public enum ParameterKey
{
    MaterialId,
    WallLocation,
    OutsideTemperature,
    FirstFloorAreaConductivity,
    SecondFloorAreaConductivity,
    ThirdFloorAreaConductivity,
    FourthFloorAreaConductivity,
    SpaceBottomLevel,
    MaterialThermalConductivity,
    OpeningMark,
    PartAxis,
    SpaceTemperature,
    SpaceHeatLoss,
}