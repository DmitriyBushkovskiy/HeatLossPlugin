using BIMStructureMgd.DatabaseObjects;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.DTO;

public class SpaceEdgeDto
{
    public Guid Id  { get; set; }
    public Coordinate Start { get; private set; }
    public Coordinate End { get; private set; }
    public LineString LineString { get; private set; }
    public List<BuildingOpening> ModelOpenings { get; set; } = new();
    public LinearBuildingWall? ModelWall { get; set; } //TODO: добавить реализацию с несколькими стенами
    public List<WallDto> Walls { get; set; } = new();

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
    
    public void ChangeLine(LineString newLine)
    {
        Start = newLine.StartPoint.Coordinate;
        End = newLine.EndPoint.Coordinate;
        LineString = newLine;
    }
}