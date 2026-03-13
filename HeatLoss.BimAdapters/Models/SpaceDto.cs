using BIMStructureMgd.DatabaseObjects;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.DTO;

public class SpaceDto
{
    private readonly SpaceEntity _spaceEntity;
    public long Id { get; }
    public string Number { get; init; }
    public string Name { get; init; }
    public List<WallDto> Walls { get; init; }
    public List<OpeningDto> Openings { get; init; }
    public FloorDto Floor { get; init; }
    public CeilingDto Ceiling { get; init; }
    public List<SpaceEdgeDto> Edges { get; set; } = new();
    public double Height { get; set; }
    
    public SpaceDto(SpaceEntity spaceEntity)
    {
        _spaceEntity = spaceEntity;
        Id = long.Parse(spaceEntity.Id.ToString()); //TODO: use extensions
        // Sides = ItitSides();
        Name = spaceEntity.Name;
        Number = spaceEntity.Number;
        Height = spaceEntity.Height;
    }
    
    public Polygon GetPolygon()
    {
        var r = Edges.Select(x => x.Start).ToList();
        r.Add(r.First());
        return new Polygon(new LinearRing(r.ToArray()));
    }
}