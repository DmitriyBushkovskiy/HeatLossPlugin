using NetTopologySuite.Geometries;

namespace HeatLoss.Domain.DTO;

public class OpeningDto
{
    public Guid Id { get; set; }
    public Polygon Polygon { get; set; }
}