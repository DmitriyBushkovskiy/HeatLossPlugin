using BIMStructureMgd.DatabaseObjects;
using HeatLoss.BimAdapters.Models;
using HeatLoss.Domain.Enums;
using HeatLoss.Geometry;
using HeatLoss.Geometry.Extensions;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.Extensions;

public static class LinearBuildingWallExtensions
{
    public static SurfacePosition GetPosition(this LinearBuildingWall wall)
    {
        var location = wall.GetParameter("LOCATION");
        switch (location)
        {
            case "Снаружи":
                return SurfacePosition.Outside;
            case "Внутри":
                return SurfacePosition.Inside;
            default:
                throw new Exception("Неизвестный параметр LOCATION: " + location);
        }
    }
    
    private static EntityAxis GetAxis(this LinearBuildingWall wall)
    {
        return Enum.Parse<EntityAxis>(wall.GetParameter("AEC_PART_AXIS"));
    }
    
    public static Polygon GetPolygon(this LinearBuildingWall wall)
    {
        var axis = wall.GetAxis();
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
        
        return MyGeometry.CreatePolygonByLine(
            new LineString( new []{
                new Coordinate(wall.StartPoint.X, wall.StartPoint.Y).Round(),
                new Coordinate(wall.EndPoint.X, wall.EndPoint.Y).Round()
            }),
            leftOffset,
            rightOffset);
    }
}