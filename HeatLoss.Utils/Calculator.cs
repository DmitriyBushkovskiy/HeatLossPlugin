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
                        surface.Comment = $"{wall.AdjacentSpaceNumber}";
                    }
                
                spaceHeatLossResult.TotalHeatLoss += surfacesResult.Sum(x => x.HeatLoss);
            }
            
            foreach (var ceiling in space.Ceilings)
            {
                var temperatureDifference = space.Temperature 
                                            - (ceiling.Position == SurfacePosition.Outside 
                                                ? building.OutsideTemperature 
                                                : spaceTemperatures[ceiling.AdjacentSpaceNumber!]);
                var heatTransferCoefficient = GetHeatTransferCoefficient(ceiling.ThermalConductivity);

                var ceilingResult = new SurfaceHeatLossResult
                {
                    Name = ceiling.Position == SurfacePosition.Outside
                        ? "Наружное перекрытие"
                        : $"Внутреннее перекрытие\n(с пом. {ceiling.AdjacentSpaceNumber})",
                    Area = ceiling.Area,
                    Mark = ceiling.Mark,
                    Type = SurfaceType.Ceiling,
                    Position = ceiling.Position,
                    TemperatureDifference = temperatureDifference,
                    ThermalConductivity = ceiling.ThermalConductivity,
                    HeatTransferCoefficient = heatTransferCoefficient,
                    HeatLoss = Math.Round(ceiling.Area * heatTransferCoefficient * temperatureDifference),
                    Comment = ceiling.AdjacentSpaceNumber ?? string.Empty,
                    AdjacentSpaceNumber = ceiling.AdjacentSpaceNumber
                };
                spaceHeatLossResult.Surfaces.Add(ceilingResult);
                spaceHeatLossResult.TotalHeatLoss += ceilingResult.HeatLoss;
            }
            
            foreach (var floorArea in space.FloorAreas)
            {
                var temperatureDifference = space.Temperature - building.OutsideTemperature;
                var floorAreaThermalConductivity = GetFloorThermalConductivity(floorArea.FloorAreaNumber);
                var heatTransferCoefficient = GetHeatTransferCoefficient(floorAreaThermalConductivity);

                var floorAreaResult = new SurfaceHeatLossResult
                {
                    Name = $"Пол - {(int)floorArea.FloorAreaNumber} зона",
                    Area = floorArea.Area,
                    Type = SurfaceType.Floor,
                    TemperatureDifference = temperatureDifference,
                    ThermalConductivity = floorAreaThermalConductivity,
                    HeatTransferCoefficient = heatTransferCoefficient,
                    HeatLoss = Math.Round(floorArea.Area * heatTransferCoefficient * temperatureDifference),
                    Comment = ((int)floorArea.FloorAreaNumber).ToString()
                };
                spaceHeatLossResult.Surfaces.Add(floorAreaResult);
                spaceHeatLossResult.TotalHeatLoss += floorAreaResult.HeatLoss;
            }
            buildingHeatLossResult.Spaces.Add(spaceHeatLossResult);
        }
        return buildingHeatLossResult;
    }

    public List<SurfaceHeatLossResult> CalculateWall(Wall wall, double temperatureDifference)
    {
        var result = wall.Openings.Select(x => CalculateOpening(x, temperatureDifference)).ToList();
        var wallArea = Math.Round((wall.Width * wall.Height - wall.Openings.Sum(x => x.Height * x.Width))/1_000_000, 2);
        var heatTransferCoefficient = GetHeatTransferCoefficient(wall.ThermalConductivity);
        result.Add(
            new SurfaceHeatLossResult
            {
                Name = wall.Position ==  SurfacePosition.Outside ? "Наружная стена" : $"Внутренняя стена\n(с пом. {wall.AdjacentSpaceNumber})",
                Mark = wall.Mark,
                Width = wall.Width,
                Height = wall.Height,
                Area = wallArea,
                Type = SurfaceType.Wall,
                Position = wall.Position,
                AdjacentSpaceNumber = wall.AdjacentSpaceNumber,
                TemperatureDifference = temperatureDifference,
                ThermalConductivity = wall.ThermalConductivity,
                HeatTransferCoefficient = heatTransferCoefficient,
                HeatLoss = Math.Round(wallArea * heatTransferCoefficient * temperatureDifference),
                CardinalDirection = wall.CardinalDirection
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
            Mark = opening.Mark,
            Width = opening.Width,
            Height = opening.Height,
            Area = area,
            Type = GetSurfaceTypeForOpening(opening.Type),
            TemperatureDifference = temperatureDifference,
            ThermalConductivity = opening.ThermalConductivity,
            HeatTransferCoefficient = heatTransferCoefficient,
            HeatLoss = Math.Round(area * heatTransferCoefficient * temperatureDifference),
            CardinalDirection = opening.CardinalDirection,
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
        => Math.Round(1 / thermalConductivity, 3);

    private double GetFloorThermalConductivity(FloorAreaNumber floorAreaNumber)
    {
        switch (floorAreaNumber)
        {
            case FloorAreaNumber.First:
                return 2.1;            
            case FloorAreaNumber.Second:
                return 4.3;            
            case FloorAreaNumber.Third:
                return 8.6;            
            case FloorAreaNumber.Fourth:
                return 14.2;
            default: 
                throw new ArgumentException();
        }
    }
}