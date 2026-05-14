using HeatLoss.Domain.Enums;
using HeatLoss.Infrastructure.Common.DTO;

namespace HeatLoss.Infrastructure.Common.Models;

public class BimExtractedData
{
    public List<SpaceDto> Spaces { get; }
    public List<LinearWallDto> Walls { get; }
    public List<OpeningDto> Openings { get; }
    public List<CoordinateGridDto> Grids { get; }
    public List<SlabDto> Slabs { get; }
    public Dictionary<string, double> MaterialsThermalConductivity { get; }
    public Dictionary<CardinalDirection, Vector2D> CardinalDirections { get; }
    public ProjectDataDto ProjectData { get; }

    public BimExtractedData(
        List<SpaceDto> spaces,
        List<LinearWallDto> walls,
        List<OpeningDto> openings,
        List<CoordinateGridDto> grids,
        List<SlabDto> slabs,
        Dictionary<string, double> materialsThermalConductivity,
        Dictionary<CardinalDirection, Vector2D> cardinalDirections,
        ProjectDataDto projectData)
    {
        Spaces = spaces;
        Walls =  walls;
        Openings = openings;
        Grids = grids;
        Slabs = slabs;
        MaterialsThermalConductivity = materialsThermalConductivity;
        CardinalDirections = cardinalDirections;
        ProjectData = projectData;
    }
}