using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Domain.DTO;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.Extensions;

public static class SpaceEntityExtensions
{
    public static IEnumerable<SpaceEdgeDto> GetSpaceEdges(this SpaceEntity spaceEntity)
    {
        var coordinates = spaceEntity.GetFloorContours()
            .Single()
            .ConvertTo(false)
            .GetVertex2ds()
            .Select(x => new Coordinate(x.Position.X, x.Position.Y).Round())
            .ToList();
        for (var i = 0; i < coordinates.Count; i++)
            yield return new SpaceEdgeDto(coordinates[i], coordinates[i == coordinates.Count - 1 ? 0 : i + 1]);
    }
    
    public static IEnumerable<Coordinate> GetCoordinates(this SpaceEntity spaceEntity)
    {
        return spaceEntity.GetFloorContours()
            .Single()
            .ConvertTo(false)
            .GetVertex2ds()
            .Select(x => new Coordinate(x.Position.X, x.Position.Y).Round());
    }
}