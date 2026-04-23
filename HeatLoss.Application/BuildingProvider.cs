using HeatLoss.Domain.Results;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Geometry;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;

namespace HeatLoss.Application;

public class BuildingProvider
{
    private readonly HeatLossGeometry _geometry;
    private readonly IBimProvider _bimProvider;
    private readonly Mapper _mapper;

    public BuildingProvider(IBimProvider provider)
    {
        _geometry = new HeatLossGeometry();
        _bimProvider = provider;
        _mapper = new Mapper();
    }

    public Building GetBuildingInfo()
    {
        var extractedData = _bimProvider.GetBuildingModel();

        var modelBuilder = new BuildingModelBuilder(_geometry, _bimProvider);

        var building = modelBuilder.Build(extractedData);
        
        return new Building(building.OutsideTemperature, building.Spaces.Select(x => x.ToSpace()).ToList());
    }

    public void SetHeatLossToModel(BuildingHeatLossResult heatLossResult)
    {
        _bimProvider.SetHeatLossToModel(_mapper.ToBuildingHeatLossResultDto(heatLossResult));
    }
}