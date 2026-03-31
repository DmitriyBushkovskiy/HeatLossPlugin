using System.Globalization;
using BIMStructureMgd.DatabaseObjects;
using HeatLoss.BimAdapters.Extensions;
using HeatLoss.BimAdapters.Models;
using HeatLoss.Domain.Calculation;
using HeatLoss.Domain.Enums;

namespace HeatLoss.BimAdapters.Utils;

public static class NanoCadMapper
{
    public static Opening ToOpening(this OpeningDto openingDto)
    {
        return new Opening
        {
            Name = openingDto.Name,
            Mark = openingDto.Mark,
            Width = openingDto.Width,
            Height = openingDto.Height,
            Type = openingDto.Type,
            BottomLevel =  openingDto.BottomLevel,
            ThermalConductivity =  openingDto.ThermalConductivity,
            CardinalDirection = openingDto.CardinalDirection
        };
    }
    
    public static Wall ToWall(this WallDto wallDto)
    {
        return new Wall
        {
            Mark = wallDto.Mark,
            Position = wallDto.Position,
            Width = wallDto.Width,
            Height = wallDto.Height,
            AdjacentSpaceNumber = wallDto.AdjacentSpace?.Number,
            ThermalConductivity = wallDto.ThermalConductivity,
            Openings = wallDto.Openings.Select(ToOpening).ToList(),
            CardinalDirection = wallDto.CardinalDirection
        };
    }
    
    public static Space ToSpace(this SpaceDto spaceDto)
    {
        return new Space
        {
            Number = spaceDto.Number,
            Name = spaceDto.Name,
            Temperature = spaceDto.Temperature,
            Walls = spaceDto.Edges.SelectMany(x => x.Walls).Select(ToWall).ToList(),
            FloorAreas = spaceDto.Floor?.ToFloorAreas() ?? new List<FloorArea>(),
            Ceilings = spaceDto.Ceiling.Select(ToCeiling).ToList(),
        };
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
    
    public static Ceiling ToCeiling(this CeilingDto ceilingDto)
    {
        return new Ceiling
        {
            Mark = ceilingDto.Slab?.GetParameter("BUILD_MATERIAL_ID") ?? string.Empty,
            Area = ceilingDto.Area,
            Position = ceilingDto.Position,
            ThermalConductivity =  ceilingDto.ThermalConductivity,
            AdjacentSpaceNumber = ceilingDto.Space?.Number,
        };
    }
    
    public static List<FloorArea> ToFloorAreas(this FloorDto floorDto)
    {
        return floorDto.FloorAreas
            .OrderBy(x => x.FloorAreaNumber)
            .Select(x => new FloorArea(x.FloorAreaNumber, x.Area, x.ThermalConductivity))
            .ToList();
    }
}