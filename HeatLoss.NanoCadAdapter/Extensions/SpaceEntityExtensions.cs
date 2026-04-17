using System.Globalization;
using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Geometry.Extensions;
using HeatLoss.NanoCadAdapter.DTO;
using NetTopologySuite.Geometries;

namespace HeatLoss.NanoCadAdapter.Extensions;

public static class SpaceEntityExtensions
{
    public static IEnumerable<SpaceEdgeDto> GetSpaceEdges(this SpaceEntity spaceEntity)
    {
        var coordinates = spaceEntity.GetFloorContours()
            .Single()
            .ConvertTo(false)
            .ToVertex2ds()
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
            .ToVertex2ds()
            .Select(x => new Coordinate(x.Position.X, x.Position.Y).Round());
    }
    
    public static SpaceDto ToSpaceDto(this SpaceEntity spaceEntity)
    {
        return new SpaceDto
        {
            Id = spaceEntity.Id.ToLong(),
            Name = spaceEntity.Name,
            Number = spaceEntity.Number,
            BottomLevel = spaceEntity.GetBottomLevel(),
            Height = spaceEntity.Height,
            Temperature = double.TryParse(spaceEntity.GetParameter("HL_SPACE_TEMPERATURE"), NumberStyles.Any , CultureInfo.InvariantCulture, out var temperature)
                ? temperature
                : 0,
        };
    }
    //TODO: параметр HL_SPACE_TEMPERATURE добавляется к помещениям вручную
    
    public static string GetParameter(this SpaceEntity space, string parameterName)
        => space.GetElementData().Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;
    
    public static double GetBottomLevel(this SpaceEntity space)
        => double.Parse(space.GetParameter("AEC_ELEMENT_POS_Z"), NumberStyles.Any, CultureInfo.InvariantCulture);
}