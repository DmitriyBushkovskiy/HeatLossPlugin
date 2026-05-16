using System.Text;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Extensions;
using HeatLoss.Domain.Models;
using HeatLoss.Domain.Models.Results;

namespace HeatLoss.Calculations;

public class HeatLossCalculator
{
    private const int P0 = 10; //стандартная разность давлений воздуха на наружной и внутренней поверхностях ограждающей конструкции
    private const int C = 1; //удельная массовая теплоемкость воздуха
    private const double g = 9.81; //ускорение свободного падения
    
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
            var isCornerSpace = space.Walls.Count(x => x.Position == SurfacePosition.Outside) > 1;
            foreach (var wall in space.Walls.OrderByDescending(x => x.Position).ThenBy(x => x.AdjacentSpaceNumber))
            {
                var outsideTemperature = wall.Position == SurfacePosition.Outside 
                                                ? building.OutsideTemperature 
                                                : spaceTemperatures[wall.AdjacentSpaceNumber!];

                var surfacesResult = CalculateWall(wall, building, space, outsideTemperature, isCornerSpace);
                spaceHeatLossResult.Surfaces.AddRange(surfacesResult);
                
                if (wall.Position == SurfacePosition.Inside)
                    foreach (var surface in spaceHeatLossResult.Surfaces)
                    {
                        surface.Comment = $"{wall.AdjacentSpaceNumber}";
                    }
                
                spaceHeatLossResult.TotalHeatLoss += surfacesResult.Sum(x => x.TotalHeatLoss);
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
                    TotalHeatLoss = Math.Round(ceiling.Area * heatTransferCoefficient * temperatureDifference),
                    Comment = ceiling.AdjacentSpaceNumber ?? string.Empty,
                    AdjacentSpaceNumber = ceiling.AdjacentSpaceNumber
                };
                spaceHeatLossResult.Surfaces.Add(ceilingResult);
                spaceHeatLossResult.TotalHeatLoss += ceilingResult.TotalHeatLoss;
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
                    TotalHeatLoss = Math.Round(floorArea.Area * heatTransferCoefficient * temperatureDifference),
                    Comment = ((int)floorArea.FloorAreaNumber).ToString()
                };
                spaceHeatLossResult.Surfaces.Add(floorAreaResult);
                spaceHeatLossResult.TotalHeatLoss += floorAreaResult.TotalHeatLoss;
            }
            buildingHeatLossResult.Spaces.Add(spaceHeatLossResult);
        }
        return buildingHeatLossResult;
    }

    private List<SurfaceHeatLossResult> CalculateWall(Wall wall, Building building, Space space, double outsideTemperature, bool isCornerSpace)
    {
        var insideTemperature = space.Temperature;
        var temperatureDifference = insideTemperature - outsideTemperature;
        var result = wall.Openings.Select(x => CalculateOpening(x, building, space, outsideTemperature, isCornerSpace)).ToList();
        var wallArea = Math.Round((wall.Width * wall.Height - wall.Openings.Sum(x => x.Height * x.Width))/1_000_000, 2);
        var heatTransferCoefficient = GetHeatTransferCoefficient(wall.ThermalConductivity);
        var additionalCoefficient = 1 + (wall.CardinalDirection?.GetCoefficient() ?? 0.0) + (isCornerSpace && wall.Position == SurfacePosition.Outside ? 0.05 : 0);
        
        var transmissionHeatLoss = CalculateTransmissionHeatLoss(wallArea, heatTransferCoefficient , temperatureDifference, additionalCoefficient);
        var infiltrationHeatLoss = 0;
        
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
                TransmissionHeatLoss = transmissionHeatLoss,
                InfiltrationHeatLoss = infiltrationHeatLoss,
                TotalHeatLoss = transmissionHeatLoss + infiltrationHeatLoss,
            });
        return result;
    }
    
    SurfaceHeatLossResult CalculateOpening(Opening opening, Building building, Space space, double outsideTemperature, bool isCornerSpace)
    {
        var insideTemperature = space.Temperature;
        var temperatureDifference =  insideTemperature - outsideTemperature;
        var area = Math.Round(opening.Width * opening.Height / 1_000_000, 2);
        var heatTransferCoefficient = GetHeatTransferCoefficient(opening.ThermalConductivity);
        var position = opening.CardinalDirection == null ? SurfacePosition.Inside : SurfacePosition.Outside;
        var additionalCoefficient = 1 + (opening.CardinalDirection?.GetCoefficient() ?? 0.0) + (isCornerSpace && position == SurfacePosition.Outside ? 0.05 : 0);
        
        var transmissionHeatLoss = CalculateTransmissionHeatLoss(area, heatTransferCoefficient , temperatureDifference, additionalCoefficient);
        var (infiltrationHeatLoss, infiltrationHeatLossCalculations) = CalculateOpeningInfiltrationHeatLoss(building, space, opening);
        
        return new SurfaceHeatLossResult
        {
            Name = opening.Name,
            Mark = opening.Mark,
            Width = opening.Width,
            Height = opening.Height,
            Area = area,
            Position = position,
            Type = GetSurfaceTypeForOpening(opening.Type),
            TemperatureDifference = temperatureDifference,
            ThermalConductivity = opening.ThermalConductivity,
            HeatTransferCoefficient = heatTransferCoefficient,
            CardinalDirection = opening.CardinalDirection,
            AdditionalCoefficient = additionalCoefficient,
            TransmissionHeatLoss = transmissionHeatLoss,
            InfiltrationHeatLoss = infiltrationHeatLoss,
            InfiltrationHeatLossCalculation = infiltrationHeatLossCalculations,
            TotalHeatLoss = transmissionHeatLoss + infiltrationHeatLoss,
        };
    }

    private double CalculateTransmissionHeatLoss(double area, double heatTransferCoefficient, double temperatureDifference, double additionalCoefficient)
    {
        return Math.Round(area * heatTransferCoefficient * temperatureDifference * additionalCoefficient);
    }

    private (double, string) CalculateOpeningInfiltrationHeatLoss(
        Building building,
        Space space,
        Opening opening)
    {
        // конструкция
        var R = opening.AirPermeabilityResistance; // сопротивление воздухопроницанию ограждающей конструкции
        if (R == 0)
            return (0, string.Empty);
        
        var area = Math.Round(opening.Width * opening.Height / 1_000_000, 2); //площадь воздухопроницаемой ограждающей конструкции, м2;
        var openingCenterHeight = (opening.Height / 2 + opening.BottomLevel) / 1000 ; // h – расстояние от уровня пола первого этажа до центра рассматриваемой ограждающей конструкции, м;
        
        // помещение
        var indoorTemperature = space.Temperature; //tв - температура внутреннего воздуха
        var nominalRoomPressure = 0; // Pв – условное давление в помещении, Па,
        
        // здание
        var buildingHeight = building.BuildingHeight;
        var outdoorTemperature = building.OutsideTemperature; //tн - температура наружного воздуха
        var windSpeed = building.WindSpeed; // расчетная скорость ветра в холодный период года
        var aerodynamicCoefficientWindward = building.WindwardAerodynamicCoefficient; // cн – Аэродинамический коэффициент для наветренной поверхности ограждений здания
        var aerodynamicCoefficientDownwind = building.DownwindAerodynamicCoefficient; // сз – Аэродинамический коэффициент для подветренной поверхности ограждений здания
        var windPressureCoefficient = building.WindPressureCoefficient; // kz(e) - Коэффициент учета изменения скоростного давления ветра
        
        var indoorAirDensity = Math.Round(353/(273 + indoorTemperature), 2); //ρв – плотность внутреннего воздуха, кг/м3
        var outdoorAirDensity = Math.Round(353/(273 + outdoorTemperature), 2); //ρн – плотность наружного воздуха, кг/м3
        
        //ΔPn - расчетная разность давлений на наружной и внутренней поверхностях ограждающей конструкции n-ного помещение;
        var deltaP = Math.Round((buildingHeight - openingCenterHeight) * (outdoorAirDensity - indoorAirDensity) * g +
            (indoorAirDensity * windSpeed * windSpeed) * (aerodynamicCoefficientWindward - aerodynamicCoefficientDownwind) *
            windPressureCoefficient * 0.5 - nominalRoomPressure, 2);
        
        // Ginf - Количество воздуха, поступающего в n-ное помещение в результате инфильтрации через ограждающие конструкции, кг/ч
        var Ginf = Math.Round(Math.Pow(deltaP / P0, 2d / 3) * area / R, 2);
        
        // Qinf - Расход тепла на подогрев инфильтрующегося воздуха i-ого помещения, Вт
        var Qinf = Math.Round((indoorTemperature - outdoorTemperature) * Ginf * C * 0.28);
        
        var sb = new StringBuilder();
        sb.AppendLine($"A = {area} м²");
        sb.AppendLine($"H = {buildingHeight} м");
        sb.AppendLine($"h = {openingCenterHeight} м");
        sb.AppendLine($"v = {windSpeed} м/с");
        sb.AppendLine($"cн = {aerodynamicCoefficientWindward}");
        sb.AppendLine($"сз = {aerodynamicCoefficientDownwind}");
        sb.AppendLine($"kz(e) = {windPressureCoefficient}");
        sb.AppendLine($"tв = {indoorTemperature} °С");
        sb.AppendLine($"tн = {outdoorTemperature} °С");
        sb.AppendLine($"ρв = {indoorAirDensity} кг/м³");
        sb.AppendLine($"ρн = {outdoorAirDensity} кг/м³");
        sb.AppendLine($"Pв = {nominalRoomPressure} Па");
        sb.AppendLine($"R = {R} м²·ч·Па /кг");
        sb.AppendLine($"ΔP = (H - h) · (ρн - ρв) · g+  (ρв*v²) · 0,5 · (cн - сз) · kz(e) - Pв");
        sb.AppendLine($"ΔP = ({buildingHeight} - {openingCenterHeight}) · ({outdoorAirDensity} - {indoorAirDensity})· 9.8 + ({indoorAirDensity} · {windSpeed}^2) · 0,5 · ({aerodynamicCoefficientWindward} - {aerodynamicCoefficientDownwind}) · {windPressureCoefficient} = {deltaP}");
        sb.AppendLine("Gинф = (ΔP / ΔP0)^⅔ · (A / R)");
        sb.AppendLine($"Gинф = ({deltaP} / {P0})^⅔ · ({area} / {R}) = {Ginf}");
        sb.AppendLine("Qинф = (tв - tн) · Gинф · с · 0,28");
        sb.AppendLine($"Qинф = ({indoorTemperature} - {outdoorTemperature}) · {Ginf} · 1 · 0,28 = {Qinf}");
        var calculation = sb.ToString();
        return (Qinf, calculation);
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