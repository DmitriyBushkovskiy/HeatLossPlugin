using System.Globalization;
using BIMStructureMgd.DatabaseObjects;
using HeatLoss.BimAdapters.Models;
using HeatLoss.Geometry.Extensions;
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
    
    public static string GetParameter(this SpaceEntity space, string parameterName)
        => space.GetElementData().Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;
    
    public static double GetBottomLevel(this SpaceEntity space)
        => double.Parse(space.GetParameter("AEC_ELEMENT_POS_Z"), NumberStyles.Any, CultureInfo.InvariantCulture);
}