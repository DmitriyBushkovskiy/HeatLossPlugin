using NetTopologySuite.Geometries;

namespace HeatLoss.Geometry;

public static class MyGeometry
{
    // public static (Coordinate, Coordinate) MovePoints(Coordinate start, Coordinate end, double offset) // TODO: принимать помещение
    // {
    //     // направление отрезка
    //     double dx = end.X - start.X;
    //     double dy = end.Y - start.Y;
    //     double len = Math.Sqrt(dx * dx + dy * dy);
    //
    //     dx /= len;
    //     dy /= len;
    //
    //     // нормаль
    //     double nx = -dy;
    //     double ny = dx;
    //
    //     // новые точки
    //     Coordinate newStart = new Coordinate(start.X + nx * offset, start.Y + ny * offset);
    //     Coordinate newEnd = new Coordinate(end.X + nx * offset, end.Y + ny * offset);
    //     
    //     return (newStart, newEnd);
    // }
    //
    // public static (Coordinate, Coordinate) MoveLine(LineString line, double offset) // TODO: принимать помещение
    // {
    //     var start = line.StartPoint.Coordinate;
    //     var end = line.Coordinate;
    //     
    //     return MovePoints(start, end, offset);
    // }
}