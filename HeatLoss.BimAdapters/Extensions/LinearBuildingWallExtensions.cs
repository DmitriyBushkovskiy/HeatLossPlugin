using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Domain.DTO;
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
    
    public static Polygon GetPolygon(this LinearBuildingWall wall)
    {
        var perpVector = wall.XDir.RotateBy(- Math.PI / 2, Vector3d.ZAxis) * wall.Thickness;
        var perpStartPoint = wall.StartPoint + perpVector;
        var perpEndPoint = wall.EndPoint + perpVector;

        return new Polygon(new LinearRing(new[]
        {
            new Coordinate(wall.StartPoint.X, wall.StartPoint.Y).Round(),
            new Coordinate(wall.EndPoint.X, wall.EndPoint.Y).Round(),
            new Coordinate(perpEndPoint.X, perpEndPoint.Y).Round(),
            new Coordinate(perpStartPoint.X, perpStartPoint.Y).Round(),
            new Coordinate(wall.StartPoint.X, wall.StartPoint.Y).Round(),
        }));
    }
}