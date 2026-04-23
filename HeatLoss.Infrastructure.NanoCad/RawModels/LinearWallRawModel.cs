using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.Domain.Enums;
using HeatLoss.Geometry;
using HeatLoss.Geometry.Extensions;
using HeatLoss.Infrastructure.NanoCad.Extensions;
using HeatLoss.Infrastructure.NanoCad.Enums;
using NetTopologySuite.Geometries;
using Teigha.Geometry;

namespace HeatLoss.Infrastructure.NanoCad.RawModels;

public class LinearWallRawModel: IParametric
{
    public long Id { get; }
    public Point3d StartPoint { get; }
    public Point3d EndPoint { get; }
    public Point3d BasePoint { get; }
    public double Thickness  { get; }
    public double Height  { get; }
    public SurfacePosition Position { get; }
    public string MaterialId { get; }
    public List<Parameter> Parameters { get; set; }

    public LinearWallRawModel(LinearBuildingWall wall)
    {
        Id = wall.Id.ToLong();
        StartPoint = wall.StartPoint;
        EndPoint = wall.EndPoint;
        BasePoint = wall.BasePoint;
        Thickness = wall.Thickness;
        Height = wall.Height;
        Parameters = wall.GetElementData().Parameters.ToList();
        Position = GetPosition();
        MaterialId = GetParameter(Parameter.Names.BuildMaterialId);
    }

    public double GetWallThickness()
    {
        switch (Position)
        {
            case SurfacePosition.Inside: return 0;
            case SurfacePosition.Outside: return Thickness;
            default: throw new ArgumentOutOfRangeException();
        }
    }

    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;

    public Polygon GetPolygon()
    {
        var axis = GetAxis();
        var leftOffset = axis switch
        {
            EntityAxis.Inside => Thickness,
            EntityAxis.Outside => 0,
            EntityAxis.Center => Thickness / 2,
            _ => throw new Exception()
        };
        
        var rightOffset = axis switch
        {
            EntityAxis.Inside => 0,
            EntityAxis.Outside => Thickness,
            EntityAxis.Center => Thickness / 2,
            _ => throw new Exception()
        };
        
        var geometry = new HeatLossGeometry();
        
        return geometry.CreatePolygonByLine(
            new LineString( new []{
                new Coordinate(StartPoint.X, StartPoint.Y).Round(),
                new Coordinate(EndPoint.X, EndPoint.Y).Round()
            }),
            leftOffset,
            rightOffset);
    }
    
    private EntityAxis GetAxis()
    {
        return Enum.Parse<EntityAxis>(Parameters.FirstOrDefault(x => x.Name == "AEC_PART_AXIS")?.Value ?? string.Empty);
    }
    
    private SurfacePosition GetPosition()
    {
        var location = Parameters.FirstOrDefault(x => x.Name == "LOCATION")?.Value;
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
}