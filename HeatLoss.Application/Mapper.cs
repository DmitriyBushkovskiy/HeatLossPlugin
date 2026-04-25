using System.Globalization;
using HeatLoss.Application.Models;
using HeatLoss.Domain.Results;
using HeatLoss.Domain.Surfaces;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Enums;
using HeatLoss.Infrastructure.Common.Models;
using NetTopologySuite.Algorithm;
using NetTopologySuite.Geometries;

namespace HeatLoss.Application;

public class Mapper
{
    private readonly IParameterResolver _parameterResolver;

    public Mapper(IParameterResolver parameterResolver)
    {
        _parameterResolver = parameterResolver;
    }

    public SpaceIntermediateModel ToSpaceModel(SpaceDto space)
    {
        return new SpaceIntermediateModel
        {
            Id = space.Id,
            Name = space.Name,
            Number = space.Number,
            BottomLevel = space.BottomLevel,
            Height = space.Height,
            Temperature = double.TryParse(space.Parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.SpaceTemperature)).Value, NumberStyles.Any , CultureInfo.InvariantCulture, out var temperature)
                ? temperature
                : 0,
        };
    }

    public BuildingHeatLossResultDto ToBuildingHeatLossResultDto(BuildingHeatLossResult buildingHeatLossResult)
    {
        return new BuildingHeatLossResultDto
        {
            Spaces = buildingHeatLossResult.Spaces.Select(x => new SpaceHeatLossResultDto
            {
                Name = x.Name,
                Number = x.Number,
                TotalHeatLoss = x.TotalHeatLoss
            }).ToList()
        };
    }
    
    public Line3D ToLine(LineString lineString, double Z)
    {
        return new Line3D(new Point3D(lineString.StartPoint.X, lineString.StartPoint.Y, Z),
            new Point3D(lineString.EndPoint.X, lineString.EndPoint.Y, Z));
    }
    
    public Polyline3D ToPolyline3D(Polygon polygon, double Z)
    {
        var lines = new List<Line3D>();
        var cnt = polygon.Coordinates.Length;
        for (int i = 0; i < cnt - 1; i++)
        {
            var current = polygon.Coordinates[i];
            var next = polygon.Coordinates[i + 1];
            lines.Add(new Line3D(new Point3D(current.X, current.Y, Z), new Point3D(next.X, next.Y, Z)));
        }
        return new Polyline3D(lines);
    }

    public Ceiling ToCeiling(CeilingIntermediateModel ceilingIntermediate)
    {
        return new Ceiling
        {
            Area = ceilingIntermediate.Area,
            Position = ceilingIntermediate.Position,
            ThermalConductivity =  ceilingIntermediate.ThermalConductivity,
            AdjacentSpaceNumber = ceilingIntermediate.Space?.Number,
        };
    }

    public Space ToSpace(SpaceIntermediateModel spaceIntermediate)
    {
        return new Space
        {
            Number = spaceIntermediate.Number,
            Name = spaceIntermediate.Name,
            Temperature = spaceIntermediate.Temperature,
            Walls = spaceIntermediate.Edges.SelectMany(x => x.Walls).Select(ToWall).ToList(),
            FloorAreas = spaceIntermediate.Floor?.GetFloorAreas() ?? new List<FloorArea>(),
            Ceilings = spaceIntermediate.Ceiling.Select(ToCeiling).ToList(),
        };
    }
        
    public Opening ToOpening(OpeningIntermediateModel openingIntermediate)
    {
        return new Opening
        {
            Name = openingIntermediate.Name,
            Mark = openingIntermediate.Mark,
            Width = openingIntermediate.Width,
            Height = openingIntermediate.Height,
            Type = openingIntermediate.Type,
            BottomLevel =  openingIntermediate.BottomLevel,
            ThermalConductivity =  openingIntermediate.ThermalConductivity,
            CardinalDirection = openingIntermediate.CardinalDirection
        };
    }
    
    public Wall ToWall(WallIntermediateModel wallIntermediate)
    {
        return new Wall
        {
            Mark = wallIntermediate.Mark,
            Position = wallIntermediate.Position,
            Width = wallIntermediate.Width,
            Height = wallIntermediate.Height,
            AdjacentSpaceNumber = wallIntermediate.AdjacentSpace?.Number,
            ThermalConductivity = wallIntermediate.ThermalConductivity,
            Openings = wallIntermediate.Openings.Select(ToOpening).ToList(),
            CardinalDirection = wallIntermediate.CardinalDirection
        };
    }
    
    public NetTopologySuite.Mathematics.Vector2D ToVector2D(Vector2D vector)
    {
        return new NetTopologySuite.Mathematics.Vector2D(vector.X, vector.Y);
    }
}