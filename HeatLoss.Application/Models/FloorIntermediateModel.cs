using HeatLoss.Domain.Surfaces;

namespace HeatLoss.Application.Models;

public class FloorIntermediateModel
{
    public List<FloorAreaIntermediateModel> FloorAreas { get; } = new();
    
    public List<FloorArea> GetFloorAreas()
    {
        return FloorAreas
            .OrderBy(x => x.FloorAreaNumber)
            .Select(x => new FloorArea(x.FloorAreaNumber, x.Area, x.ThermalConductivity))
            .ToList();
    }
}