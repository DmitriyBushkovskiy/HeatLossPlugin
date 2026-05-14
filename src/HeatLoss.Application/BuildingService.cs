using HeatLoss.Domain.Models;
using HeatLoss.Domain.Models.Results;
using HeatLoss.Geometry;
using HeatLoss.Infrastructure.Common;

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

        return _mapper.ToBuilding(building, extractedData.ProjectData);
    }

    public void SaveHeatLossToModel(BuildingHeatLossResult heatLossResult)
    {
        _bimProvider.SaveHeatLossToModel(_mapper.ToBuildingHeatLossResultDto(heatLossResult));
    }
}