using HeatLoss.Domain.Results;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Geometry;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;

namespace HeatLoss.Application;

public class BuildingService
{
    private readonly HeatLossGeometry _geometry;
    private readonly IBimProvider _bimProvider;
    private readonly Mapper _mapper;

    public BuildingService(IBimProvider provider)
    {
        _geometry = new HeatLossGeometry();
        _bimProvider = provider;
        _mapper = new Mapper(_bimProvider.ParameterResolver);
    }

    public Building CreateBuilding()
    {
        var extractedData = _bimProvider.ExtractBuildingData();

        var modelBuilder = new BuildingModelFactory(_geometry, _bimProvider);

        var building = modelBuilder.Build(extractedData);
        
        return new Building(building.OutsideTemperature, building.Spaces.Select(x => x.ToSpace()).ToList());
    }

    public void SaveHeatLossToModel(BuildingHeatLossResult heatLossResult)
    {
        _bimProvider.SaveHeatLossToModel(_mapper.ToBuildingHeatLossResultDto(heatLossResult));
    }
}