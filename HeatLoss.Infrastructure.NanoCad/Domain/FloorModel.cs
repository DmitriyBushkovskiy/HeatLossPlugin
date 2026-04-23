using HeatLoss.Domain.Surfaces;

namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class FloorModel
{
    public List<FloorAreaModel> FloorAreas { get; } = new();
    
    public List<FloorArea> ToFloorAreas()
    {
        return FloorAreas
            .OrderBy(x => x.FloorAreaNumber)
            .Select(x => new FloorArea(x.FloorAreaNumber, x.Area, x.ThermalConductivity))
            .ToList();
    }
}