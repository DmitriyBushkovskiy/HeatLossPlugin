using System.Net;
using HeatLoss.Geometry;
using HeatLoss.Geometry.Extensions;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Enums;
using NetTopologySuite.Geometries;
using NetTopologySuite.Mathematics;

namespace HeatLoss.Application;

public class GeometryService
{
    public Polygon GetPolygon(LinearWallDto wall)
    {
        var axis = Enum.Parse<EntityAxis>(wall.Parameters.FirstOrDefault(x => x.Name == "AEC_PART_AXIS").Value ?? string.Empty);
        var leftOffset = axis switch
        {
            EntityAxis.Inside => wall.Thickness,
            EntityAxis.Outside => 0,
            EntityAxis.Center => wall.Thickness / 2,
            _ => throw new Exception()
        };
        
        var rightOffset = axis switch
        {
            EntityAxis.Inside => 0,
            EntityAxis.Outside => wall.Thickness,
            EntityAxis.Center => wall.Thickness / 2,
            _ => throw new Exception()
        };
        
        var geometry = new HeatLossGeometry();
        
        return geometry.CreatePolygonByLine(
            new LineString( new []{
                new Coordinate(wall.StartPoint.X, wall.StartPoint.Y).Round(),
                new Coordinate(wall.EndPoint.X, wall.EndPoint.Y).Round()
            }),
            leftOffset,
            rightOffset);
    }
    
    public Polygon GetPolygon(OpeningDto opening)
    {
        var axis = Enum.Parse<EntityAxis>(opening.Parameters.FirstOrDefault(x => x.Name == "AEC_PART_AXIS").Value ?? string.Empty);
        var endPoint = opening.BasePoint + opening.XDir * opening.Width;
        var position = opening.OpeningSide == OpeningSideType.Inside ? -1 : 1;
        
        var leftOffset = axis switch
        {
            EntityAxis.Inside => position * opening.Thickness,
            EntityAxis.Outside => 0,
            EntityAxis.Center => opening.Thickness / 2,
            _ => throw new Exception()
        };
        
        var rightOffset = axis switch
        {
            EntityAxis.Inside => 0,
            EntityAxis.Outside => position * opening.Thickness,
            EntityAxis.Center => opening.Thickness / 2,
            _ => throw new Exception()
        };
        
        var geometry = new HeatLossGeometry();
        
        return geometry.CreatePolygonByLine(
            new LineString( new []{
                new Coordinate(opening.BasePoint.X, opening.BasePoint.Y).Round(),
                new Coordinate(endPoint.X, endPoint.Y).Round()
            }),
            leftOffset,
            rightOffset);
    }
    
    public Polygon GetPolygon(SlabDto slab)
    {
        var slabCoordinates = new List<Coordinate>(slab.Coordinates.Select(x => new Coordinate(x.X, x.Y)));
        slabCoordinates.Add(slabCoordinates.First());
        return new Polygon(new LinearRing(slabCoordinates.ToArray()));
    }

    public Vector2D ToVector2D(Infrastructure.Common.Models.Vector2D vector)
    {
        return new Vector2D(vector.X, vector.Y);
    }
}