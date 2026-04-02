using HeatLoss.Geometry.Extensions;
using NetTopologySuite.Geometries;
using NetTopologySuite.Mathematics;
using NetTopologySuite.Operation.Buffer;
using NetTopologySuite.Operation.Union;

namespace HeatLoss.Geometry;

public class HeatLossGeometry
{
    /// <summary>
    /// Получение общего периметра для нескольких полигонов
    /// </summary>
    public IEnumerable<Polygon> GetCommonPerimeters(IEnumerable<Polygon> polygons, double offset)
    {
        var bufferParams = new BufferParameters
        {
            JoinStyle = JoinStyle.Mitre,
            EndCapStyle = EndCapStyle.Flat,
            QuadrantSegments = 1,
            MitreLimit = 10
        };
        
        var expandedPolygons = polygons.Select(p => BufferOp.Buffer(p, offset, bufferParams));
        var union = UnaryUnionOp.Union(expandedPolygons);
        var buildingPerimeter = BufferOp.Buffer(union, -offset, bufferParams);

        return buildingPerimeter switch
        {
            Polygon p => new List<Polygon> { p },
            MultiPolygon mp => mp.Geometries.Cast<Polygon>(),
            _ => throw new Exception()
        };
    }
    
    /// <summary>
    /// Построение полигонов с отступом
    /// </summary>
    public List<Polygon> CreatePolygonsWithOffset(List<Polygon> previousZones, double offset)
    {
        if (previousZones.Count == 0)
            return new List<Polygon>();
        
        var bufferParams = new BufferParameters
        {
            JoinStyle = JoinStyle.Mitre,
            EndCapStyle = EndCapStyle.Flat,
            QuadrantSegments = 1,
            MitreLimit = 10
        };
        
        var result = new List<Polygon>();

        var newZonePoligons = previousZones
            .Select(z => BufferOp.Buffer(z, offset, bufferParams));

        foreach (var zone in newZonePoligons)
        {
            switch (zone)
            {
                case Polygon p:
                    result.Add(p);
                    break;

                case MultiPolygon mp:
                    result.AddRange(mp.Geometries.Cast<Polygon>());
                    break;

                default:
                    throw new Exception();
            }
        }
        return result;
    }
    
    public Coordinate FindIntersectionPoint(
        Coordinate firstLineStart, 
        Coordinate firstLineEnd, 
        Coordinate secondLineStart, 
        Coordinate secondLineEnd)
    {
        var a1 = firstLineEnd.Y - firstLineStart.Y;
        var b1 = firstLineStart.X - firstLineEnd.X;
        var c1 = a1 * firstLineStart.X + b1 * firstLineStart.Y;

        var a2 = secondLineEnd.Y - secondLineStart.Y;
        var b2 = secondLineStart.X - secondLineEnd.X;
        var c2 = a2 * secondLineStart.X + b2 * secondLineStart.Y;

        var det = a1 * b2 - a2 * b1;

        if (Math.Abs(det) < 1e-10)
            throw new Exception("Не удалось найти точку пересечения: линии параллельны");

        var x = (b2 * c1 - b1 * c2) / det;
        var y = (a1 * c2 - a2 * c1) / det;

        return new Coordinate(x, y);
    }
    
    public Coordinate FindIntersectionPoint(LineString firstLine, LineString secondLine)
        => FindIntersectionPoint(firstLine.StartPoint.Coordinate, firstLine.EndPoint.Coordinate, secondLine.StartPoint.Coordinate, secondLine.EndPoint.Coordinate);
    
    /// <summary>
    /// Создание полигона для фактического участка стены помещения
    /// </summary>
    public Polygon CreatePolygonByLine(LineString line, double leftOffset, double rightOffset)
    {
        var leftLine = MoveLine(line, - leftOffset);
        var rightLine = MoveLine(line, rightOffset);

        return new Polygon(new LinearRing(new[]
        {
            leftLine.StartPoint.Coordinate,
            leftLine.EndPoint.Coordinate,
            rightLine.EndPoint.Coordinate,
            rightLine.StartPoint.Coordinate,
            leftLine.StartPoint.Coordinate,
        }));
    }

    public LineString MoveLine(LineString lineString, double offset)
    {
        var dx = lineString.EndPoint.X - lineString.StartPoint.X;
        var dy = lineString.EndPoint.Y - lineString.StartPoint.Y;
        var len = Math.Sqrt(dx * dx + dy * dy);

        dx /= len;
        dy /= len;

        var nx = -dy;
        var ny = dx;

        return new LineString(new[]
        {
            new Coordinate(lineString.StartPoint.X + nx * offset, lineString.StartPoint.Y + ny * offset).Round(),
            new Coordinate(lineString.EndPoint.X + nx * offset, lineString.EndPoint.Y + ny * offset).Round()
        });
    }
    
    public Vector2D GetInnerPerpendicular(Polygon polygon, LineString edge)
    {
        var a = edge.GetCoordinateN(0);
        var b = edge.GetCoordinateN(1);

        var dx = b.X - a.X;
        var dy = b.Y - a.Y;

        var n1 = new Vector2D(-dy, dx);
        var n2 = new Vector2D(dy, -dx);
        
        n1.Normalize();
        n2.Normalize();
        
        var length = 10;

        var point = new Point(new Coordinate(
            a.X + n1.X * length,
            a.Y + n1.Y * length));

        var normal = polygon.Contains(point) ? n1 : n2;

        var end = new Coordinate(
            a.X + normal.X * length,
            a.Y + normal.Y * length);

        return new Vector2D(a, end);
    }
}