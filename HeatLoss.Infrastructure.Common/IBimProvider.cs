using System.Drawing;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;

namespace HeatLoss.Infrastructure.Common;

public interface IBimProvider
{
    BimExtractedData GetBuildingModel();
    void SetHeatLossToModel(BuildingHeatLossResultDto heatLossResult);
    void WriteMessage(string message);
    void PrintGeometry(IEnumerable<IDrawable> geometries, string layer, Color? color);
}