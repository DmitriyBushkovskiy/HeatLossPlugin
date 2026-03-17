using BIMStructureMgd.DatabaseObjects;
using HeatLoss.BimAdapters.Models;
using HeatLoss.Geometry;
using HeatLoss.Geometry.Extensions;
using NetTopologySuite.Geometries;

namespace HeatLoss.BimAdapters.Extensions;

public static class BuildingOpeningExtensions
{
    public static Polygon GetPolygon(this BuildingOpening opening)
    {
        var axis = Enum.Parse<EntityAxis>(opening.GetParameter("AEC_PART_AXIS"));
        var endPoint = opening.BasePoint + opening.XDir * opening.Width;
        var position = opening.OpeningSide == BuildingOpening.OpeningSideType.Inside ? -1 : 1;
        
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
        
        return MyGeometry.CreatePolygonByLine(
            new LineString( new []{
                new Coordinate(opening.BasePoint.X, opening.BasePoint.Y).Round(),
                new Coordinate(endPoint.X, endPoint.Y).Round()
            }),
            leftOffset,
            rightOffset);
    }
}