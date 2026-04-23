using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;
using NetTopologySuite.Geometries;

namespace HeatLoss.Application.Models;

public class SpaceEdgeModel
{
    public Guid Id  { get; private set; }
    public Coordinate Start { get; private set; }
    public Coordinate End { get; private set; }
    public LineString LineString { get; private set; }
    public List<OpeningDto> ModelOpenings { get; } = new();
    public LinearWallDto? ModelWall { get; set; } //TODO: добавить реализацию с несколькими стенами
    public List<WallModel> Walls { get; } = new();

    public SpaceEdgeModel(Point3D start, Point3D end) : 
        this(new Coordinate(start.X, start.Y), new Coordinate(end.X, end.Y)) {}
    
    public SpaceEdgeModel(Coordinate start, Coordinate end)
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