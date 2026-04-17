using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Extensions;
using HeatLoss.Domain.Results;
using HeatLoss.Domain.Surfaces;

namespace HeatLoss.Calculations;

public class HeatLossCalculator
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
            foreach (var wall in space.Walls.OrderByDescending(x => x.Position).ThenBy(x => x.AdjacentSpaceNumber))
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
                var heatTransferCoefficient = GetHeatTransferCoefficient(floorArea.ThermalConductivity);

                var floorAreaResult = new SurfaceHeatLossResult
                {
                    Name = $"Пол - {(int)floorArea.FloorAreaNumber} зона",
                    Area = floorArea.Area,
                    Type = SurfaceType.Floor,
                    TemperatureDifference = temperatureDifference,
                    ThermalConductivity = floorArea.ThermalConductivity,
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

    private List<SurfaceHeatLossResult> CalculateWall(Wall wall, double temperatureDifference)
    {
        var result = wall.Openings.Select(x => CalculateOpening(x, temperatureDifference)).ToList();
        var wallArea = Math.Round((wall.Width * wall.Height - wall.Openings.Sum(x => x.Height * x.Width))/1_000_000, 2);
        var heatTransferCoefficient = GetHeatTransferCoefficient(wall.ThermalConductivity);
        var additionalCoefficient = 1 + (wall.CardinalDirection?.GetCoefficient() ?? 0.0);
        result.Insert(0,
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
                CardinalDirection = wall.CardinalDirection,
                AdditionalCoefficient = additionalCoefficient,
                HeatLoss = Math.Round(wallArea * heatTransferCoefficient * temperatureDifference * additionalCoefficient),
            });
        return result;
    }
    
    SurfaceHeatLossResult CalculateOpening(Opening opening, double temperatureDifference)
    {
        var area = Math.Round(opening.Width * opening.Height / 1_000_000, 2);
        var heatTransferCoefficient = GetHeatTransferCoefficient(opening.ThermalConductivity);
        var additionalCoefficient = 1 + (opening.CardinalDirection?.GetCoefficient() ?? 0.0);
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
            CardinalDirection = opening.CardinalDirection,
            AdditionalCoefficient = additionalCoefficient,
            HeatLoss = Math.Round(area * heatTransferCoefficient * temperatureDifference * additionalCoefficient)
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
}