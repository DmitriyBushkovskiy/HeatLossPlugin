using HeatLoss.Infrastructure.NanoCad.RawModels;
using NetTopologySuite.Geometries;

namespace HeatLoss.Infrastructure.NanoCad.Domain;

public class SpaceEdgeModel
{
    public Guid Id  { get; private set; }
    public Coordinate Start { get; private set; }
    public Coordinate End { get; private set; }
    public LineString LineString { get; private set; }
    public List<OpeningRawModel> ModelOpenings { get; } = new();
    public LinearWallRawModel? ModelWall { get; set; } //TODO: добавить реализацию с несколькими стенами
    public List<WallModel> Walls { get; } = new();

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