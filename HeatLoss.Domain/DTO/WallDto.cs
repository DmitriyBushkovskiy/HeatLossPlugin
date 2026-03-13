using NetTopologySuite.Geometries;

namespace HeatLoss.Domain.DTO;

public class WallDto
{
    public long Id  { get; set; }
    public Polygon Polygon  { get; set; }
    public List<OpeningDto> Openings { get; set; } = new();
    // public List<Space> BelongToSpaces { get; set; } = new();
    public WallPosition Position { get; set; }
    public double Thickness { get; set; }
    public double Width { get; set; }
    public double Height { get; set; }
    public SpaceDto? AdjacentSpace  { get; set; } // смежное помещение для внутренней стены

    // public WallDto(long id)
    // {
    //     Id = id;
    // }
}