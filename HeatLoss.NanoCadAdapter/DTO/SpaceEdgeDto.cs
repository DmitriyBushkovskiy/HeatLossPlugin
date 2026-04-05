using BIMStructureMgd.DatabaseObjects;
using NetTopologySuite.Geometries;

namespace HeatLoss.NanoCadAdapter.DTO;

public class SpaceEdgeDto
{
    public Guid Id  { get; private set; }
    public Coordinate Start { get; private set; }
    public Coordinate End { get; private set; }
    public LineString LineString { get; private set; }
    public List<BuildingOpening> ModelOpenings { get; } = new();
    public LinearBuildingWall? ModelWall { get; set; } //TODO: добавить реализацию с несколькими стенами
    public List<WallDto> Walls { get; } = new();

    public SpaceEdgeDto(Coordinate start, Coordinate end)
    {
        Id = Guid.NewGuid();
        Start = start;
        End = end;
        LineString = new LineString(new[] { Start, End });
    }
    
    public void ChangeCoordinates(Coordinate start, Coordinate end)
    {
        Start = start;
        End = end;
        LineString = new LineString(new[] { start, end });
    }
}