using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Results;
using HeatLoss.Reports;

namespace ConsoleApp1;

class Program
{
    static void Main(string[] args)
    {
        var options = new ReportGeneratorOptions
        {
            LengthMeasurementUnit = LengthMeasurementUnit.Meter
        };
        
        var reportGenerator = new ReportGenerator(options);

        var result = new BuildingHeatLossResult
        {
            Spaces = new List<SpaceHeatLossResult>
            {
                new SpaceHeatLossResult
                {
                    Number = "101",
                    Name = "HeatLoss101",
                    Temperature = 16,
                    Surfaces = new()
                    {
                        new SurfaceHeatLossResult
                        {
                            Type = SurfaceType.Door,
                            Area = 5.4,
                            ThermalConductivity = 0.25,
                            HeatTransferCoefficient = 4,
                            TemperatureDifference = 17,
                            HeatLoss = 250,
                            Width = 1200,
                            Height = 1555
                        },
                        new SurfaceHeatLossResult
                        {
                            Type = SurfaceType.Window,
                            Area = 1.23,
                            ThermalConductivity = 0.33,
                            HeatTransferCoefficient = 3,
                            TemperatureDifference = 356,
                            HeatLoss = 432,
                            Width = 2445,
                            Height = 1000
                        },
                    }
                },
                new SpaceHeatLossResult
                {
                    Number = "102",
                    Name = "HeatLoss102",
                    Temperature = 18,
                    Surfaces = new()
                    {
                        new SurfaceHeatLossResult
                        {
                            Type = SurfaceType.Wall,
                            Area = 15.42,
                            ThermalConductivity = 1.25,
                            HeatTransferCoefficient = 3,
                            TemperatureDifference = 2,
                            HeatLoss = 20,
                            Width = 2000,
                            Height = 1750
                        },
                        new SurfaceHeatLossResult
                        {
                            Type = SurfaceType.Ceiling,
                            Area = 2.23,
                            ThermalConductivity = 0.55,
                            HeatTransferCoefficient = 34,
                            TemperatureDifference = 12,
                            HeatLoss = 444,
                            Width = 2222,
                            Height = 1200
                        },
                    }
                }
            }
        };
        
        reportGenerator.GenerateReport(result);
    }
}