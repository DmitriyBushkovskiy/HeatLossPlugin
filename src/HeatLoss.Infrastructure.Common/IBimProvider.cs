using System.Drawing;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;

namespace HeatLoss.Infrastructure.Common;

public interface IBimProvider
{
    IParameterResolver ParameterResolver { get; }
    string DocumentPath { get; }
    BimExtractedData ExtractBuildingData();
    void SaveHeatLossToModel(BuildingHeatLossResultDto heatLossResult);
    void WriteMessage(string message);
    void PrintGeometry(IEnumerable<IDrawable> geometries, string layer, Color? color);
}