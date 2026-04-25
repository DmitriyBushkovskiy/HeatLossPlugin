namespace HeatLoss.Application.Models;

public class BuildingIntermediateModel
{
    public double OutsideTemperature { get; set; }
    public List<SpaceIntermediateModel> Spaces { get; set; }

    public BuildingIntermediateModel(double outsideTemperature, List<SpaceIntermediateModel> spaces)
    {
        OutsideTemperature = outsideTemperature;
        Spaces = spaces;
    }
}