using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.Enums;

namespace HeatLoss.Infrastructure.NanoCad;

public class NanoCadParameterResolver: IParameterResolver
{
    private readonly Dictionary<ParameterKey, string> _parameters = new ()
    {
        { ParameterKey.MaterialId, "BUILD_MATERIAL_ID" },
        { ParameterKey.WallLocation, "LOCATION" },
        { ParameterKey.OutsideTemperature, "HL_OUTSIDE_TEMPERATURE" },
        { ParameterKey.FirstFloorAreaConductivity, "HL_FLOOR_AREA1_THERMAL_CONDUCTIVITY" },
        { ParameterKey.SecondFloorAreaConductivity, "HL_FLOOR_AREA2_THERMAL_CONDUCTIVITY" },
        { ParameterKey.ThirdFloorAreaConductivity, "HL_FLOOR_AREA3_THERMAL_CONDUCTIVITY" },
        { ParameterKey.FourthFloorAreaConductivity, "HL_FLOOR_AREA4_THERMAL_CONDUCTIVITY" },
        { ParameterKey.SpaceBottomLevel, "AEC_ELEMENT_POS_Z" },
        { ParameterKey.MaterialThermalConductivity, "BUILD_THERMAL_CONDUCTIVITY" },
        { ParameterKey.OpeningMark, "BOM_MARK" },
        { ParameterKey.PartAxis, "AEC_PART_AXIS" },
        { ParameterKey.SpaceTemperature, "HL_SPACE_TEMPERATURE" },
        { ParameterKey.SpaceHeatLoss, "HL_HEAT_LOSS" },
        { ParameterKey.NominalRoomPressure, "HL_NOMINAL_ROOM_PRESSURE" },
        { ParameterKey.BuildingHeight, "HL_BUILDING_HEIGHT" },
        { ParameterKey.WindSpeed, "HL_WIND_SPEED" },
        { ParameterKey.WindwardAerodynamicCoefficient, "HL_AERODYNAMIC_COEFFICIENT_WINDWARD" },
        { ParameterKey.DownwindAerodynamicCoefficient, "HL_AERODYNAMIC_COEFFICIENT_DOWNWIND" },
        { ParameterKey.WindPressureCoefficient, "HL_WIND_PRESSURE_COEFFICIENT" },
        { ParameterKey.AirPermeabilityResistance, "HL_AIR_PERMEABILITY_RESISTANCE" },
    };
    
    public string GetParameterName(ParameterKey key)
    {
        return _parameters[key];
    }
}