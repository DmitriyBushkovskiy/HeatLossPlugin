using System.Globalization;
using HeatLoss.Application.Models;
using HeatLoss.Domain.Results;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;
using NetTopologySuite.Geometries;

namespace HeatLoss.Application;

public class Mapper
{
    private readonly IParameterResolver _parameterResolver;

    public Mapper(IParameterResolver parameterResolver)
    {
        _parameterResolver = parameterResolver;
    }

    public SpaceModel ToSpaceModel(SpaceDto space)
    {
        return new SpaceModel
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

        //
        // var p = new Polyline3D();
        // return new Line3D(new Point3D(lineString.StartPoint.X, lineString.StartPoint.Y, Z),
        //     new Point3D(lineString.EndPoint.X, lineString.EndPoint.Y, Z));
    }
}