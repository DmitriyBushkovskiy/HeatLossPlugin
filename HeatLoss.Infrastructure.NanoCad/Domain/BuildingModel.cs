namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class BuildingModel
{
    public double OutsideTemperature { get; set; }
    public List<SpaceModel> Spaces { get; set; }

    public BuildingModel(double outsideTemperature, List<SpaceModel> spaces)
    {
        OutsideTemperature = outsideTemperature;
        Spaces = spaces;
    }
}