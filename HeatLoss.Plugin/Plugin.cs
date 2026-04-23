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
    private readonly Editor _editor;
    
    private Building? _building;
    private BuildingHeatLossResult? _buildingHeatLossResult;

    public Plugin()
    {
        var document = Application.DocumentManager.MdiActiveDocument;
        _editor = document.Editor;
    }

    [CommandMethod("HL_CALCULATE")]
    public void Foo_Calculate()
    {
        try
        {
            var na = new BuildingProvider();
            _building = na.GetBuildingInfo();
        
            var calculator = new HeatLossCalculator();
            _buildingHeatLossResult = calculator.Calculate(_building);
        
            na.SetHeatLossToModel(_buildingHeatLossResult);

            var options = new ReportGeneratorOptions
            {
                LengthMeasurementUnit = LengthMeasurementUnit.Meter
            };
        
            var reportGenerator = new ReportGenerator(options);
            reportGenerator.GenerateReport(_buildingHeatLossResult);
            _editor.WriteMessage("Отчет сформирован!");
        }
        catch (Exception)
        {
            _editor.WriteMessage("Произошла ошибка во время расчета. Повторите команду");
            throw;
        }
    }
}