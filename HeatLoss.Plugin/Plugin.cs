using HeatLoss.Application;
using HeatLoss.Calculations;
using HeatLoss.Infrastructure.NanoCad;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Results;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Reports;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using Teigha.Runtime;
using Exception = System.Exception;

namespace HeatLoss.Plugin;

public class Plugin
{
    private Building? _building;
    private BuildingHeatLossResult? _buildingHeatLossResult;

    [CommandMethod("HL_CALCULATE")]
    public void CalculateHeatLoss()
    {
        var bimProvider = new NanoCadProvider();
        try
        {
            var buildingProvider = new BuildingService(bimProvider);
            _building = buildingProvider.CreateBuilding();
        
            var calculator = new HeatLossCalculator();
            _buildingHeatLossResult = calculator.Calculate(_building);
            
            buildingProvider.SaveHeatLossToModel(_buildingHeatLossResult);

            var options = new ReportGeneratorOptions
            {
                LengthMeasurementUnit = LengthMeasurementUnit.Meter
            };
        
            var reportGenerator = new ReportGenerator(options);
            reportGenerator.GenerateReport(_buildingHeatLossResult);
            bimProvider.WriteMessage("Отчет сформирован!");
        }
        catch (Exception)
        {
            bimProvider.WriteMessage("Произошла ошибка во время расчета. Повторите команду");
            throw;
        }
    }
}