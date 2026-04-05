using HeatLoss.Domain.Surfaces;

namespace HeatLoss.NanoCadAdapter.DTO;

public class FloorDto
{
    public List<FloorAreaDto> FloorAreas { get; } = new();
    
    public List<FloorArea> ToFloorAreas()
    {
        return FloorAreas
            .OrderBy(x => x.FloorAreaNumber)
            .Select(x => new FloorArea(x.FloorAreaNumber, x.Area, x.ThermalConductivity))
            .ToList();
    }
}