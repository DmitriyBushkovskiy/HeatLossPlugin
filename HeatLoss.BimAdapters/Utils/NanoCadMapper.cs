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
        var result = new List<FloorArea>();
        if (floorDto.FirstFloorAreaArea > 0)
            result.Add(new FloorArea(FloorAreaNumber.First, floorDto.FirstFloorAreaArea));
        if (floorDto.SecondFloorAreaArea > 0)
            result.Add(new FloorArea(FloorAreaNumber.Second, floorDto.SecondFloorAreaArea));
        if (floorDto.ThirdFloorAreaArea > 0)
            result.Add(new FloorArea(FloorAreaNumber.Third, floorDto.ThirdFloorAreaArea));
        if (floorDto.FourthFloorAreaArea > 0)
            result.Add(new FloorArea(FloorAreaNumber.Fourth, floorDto.FourthFloorAreaArea));
        return result;
    }
}