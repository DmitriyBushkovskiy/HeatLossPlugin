using HeatLoss.Domain.Calculation;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Results;
using HeatLoss.Domain.Results.Enums;

namespace HeatLoss.Utils;

public class Calculator
{
    public BuildingHeatLossResult Calculate(Building building)
    {
        var spaceTemperatures = building.Spaces.ToDictionary(x => x.Number, x => x.Temperature);
        var buildingHeatLossResult = new BuildingHeatLossResult();
        foreach (var space in building.Spaces)
        {
            var spaceHeatLossResult = new SpaceHeatLossResult
            {
                Number = space.Number,
                Name = space.Name,
                Temperature = space.Temperature
            };
            foreach (var wall in space.Walls)
            {
                var temperatureDifference = space.Temperature 
                                            - (wall.Position == SurfacePosition.Outside 
                                                ? building.OutsideTemperature 
                                                : spaceTemperatures[wall.AdjacentSpaceNumber!]);

                var surfacesResult = CalculateWall(wall, temperatureDifference);
                spaceHeatLossResult.Surfaces.AddRange(surfacesResult);
                
                if (wall.Position == SurfacePosition.Inside)
                    foreach (var surface in spaceHeatLossResult.Surfaces)
                    {
                        surface.Comment = $"Помещение {wall.AdjacentSpaceNumber}";
                    }
                
                spaceHeatLossResult.TotalHeatLoss += surfacesResult.Sum(x => x.HeatLoss);
            }
            // foreach (var ceiling in space.Ceilings)
            // {
            //     
            // }
            // foreach (var floorArea in space.FloorAreas)
            // {
            //     
            // }
            buildingHeatLossResult.Spaces.Add(spaceHeatLossResult);
        }
        return buildingHeatLossResult;
    }

    public List<SurfaceHeatLossResult> CalculateWall(Wall wall, double temperatureDifference)
    {
        var result = wall.Openings.Select(x => CalculateOpening(x, temperatureDifference)).ToList();
        var wallArea = wall.Width * wall.Height - wall.Openings.Sum(x => x.Height * x.Width);
        var heatTransferCoefficient = GetHeatTransferCoefficient(wall.ThermalConductivity);
        result.Add(
            new SurfaceHeatLossResult
            {
                Name = wall.Position ==  SurfacePosition.Outside ? "Наружная стена" : "Внутренняя стена",
                Area = wallArea,
                Type = SurfaceType.Wall,
                TemperatureDifference = temperatureDifference,
                ThermalConductivity = wall.ThermalConductivity,
                HeatTransferCoefficient = heatTransferCoefficient,
                HeatLoss = wallArea * heatTransferCoefficient * temperatureDifference,
            });
        return result;
    }
    
    SurfaceHeatLossResult CalculateOpening(Opening opening, double temperatureDifference)
    {
        var area = Math.Round(opening.Width * opening.Height / 1_000_000, 2);
        var heatTransferCoefficient = GetHeatTransferCoefficient(opening.ThermalConductivity);
        return new SurfaceHeatLossResult
        {
            Name = opening.Name,
            Area = area,
            Type = GetSurfaceTypeForOpening(opening.Type),
            TemperatureDifference = temperatureDifference,
            ThermalConductivity = opening.ThermalConductivity,
            HeatTransferCoefficient = heatTransferCoefficient,
            HeatLoss = area * heatTransferCoefficient * temperatureDifference,
        };
    }

    private SurfaceType GetSurfaceTypeForOpening(OpeningType openingType)
    {
        switch (openingType)
        {
            case OpeningType.Door: return SurfaceType.Door;
            case OpeningType.Window: return SurfaceType.Window;
            default: throw new ArgumentException();
        }
    }

    private double GetHeatTransferCoefficient(double thermalConductivity)
        => Math.Round(1 / thermalConductivity, 2);
}