using BIMStructureMgd.DatabaseObjects;
using HeatLoss.BimAdapters.DTO;
using HeatLoss.BimAdapters.Models;
using HeatLoss.Geometry;
using HeatLoss.Geometry.Extensions;
using NetTopologySuite.Geometries;
using Teigha.Geometry;

namespace HeatLoss.BimAdapters.Extensions;

public static class LinearBuildingWallExtensions
{
    public static WallPosition GetPosition(this LinearBuildingWall wall)
    {
        var location = wall.GetElementData().Parameters.First(x => x.Name == "LOCATION").Value;
        switch (location)
        {
            case "Снаружи":
                return WallPosition.Outside;
            case "Внутри":
                return WallPosition.Inside;
            default:
                throw new Exception("Неизвестный параметр LOCATION: " + location);
        }
    }
    
    private static WallAxis GetAxis(this LinearBuildingWall wall)
    {
        return Enum.Parse<WallAxis>(wall.GetElementData().Parameters.First(x => x.Name == "AEC_PART_AXIS").Value);
    }
    
    public static Polygon GetPolygon(this LinearBuildingWall wall)
    {
        var axis = wall.GetAxis();
        var leftOffset = axis switch
        {
            WallAxis.Inside => wall.Thickness,
            WallAxis.Outside => 0,
            WallAxis.Center => wall.Thickness / 2,
            _ => throw new Exception()
        };
        
        var rightOffset = axis switch
        {
            WallAxis.Inside => 0,
            WallAxis.Outside => wall.Thickness,
            WallAxis.Center => wall.Thickness / 2,
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