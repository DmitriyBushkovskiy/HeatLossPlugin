using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.Domain.Enums;
using HeatLoss.Geometry;
using HeatLoss.Geometry.Extensions;
using HeatLoss.Infrastructure.NanoCad.Enums;
using NetTopologySuite.Geometries;
using Teigha.Geometry;

namespace HeatLoss.Infrastructure.NanoCad.RawModels;

public class OpeningRawModel: IParametric
{
    public string Name { get; }
    public double Width { get; }
    public double Height { get; }
    public OpeningType Type { get; }
    public Point3d BasePoint { get; }
    public Vector3d XDir { get; }
    public BuildingOpening.OpeningSideType OpeningSide { get; }
    public double Thickness { get; }
    public List<Parameter> Parameters { get; set; }
    
    public OpeningRawModel(BuildingOpening opening)
    {
        Name = opening.Name;
        Width = opening.Width;
        Height = opening.Height;
        BasePoint = opening.BasePoint;
        Thickness = opening.Thickness;
        XDir = opening.XDir;
        OpeningSide = opening.OpeningSide;
        Parameters = opening.GetElementData().Parameters.ToList();
        Type = Enum.Parse<OpeningType>(opening.AECType.ToString());
    }
    
    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;
    
    public Polygon GetPolygon()
    {
        var axis = Enum.Parse<EntityAxis>(GetParameter("AEC_PART_AXIS"));
        var endPoint = BasePoint + XDir * Width;
        var position = OpeningSide == BuildingOpening.OpeningSideType.Inside ? -1 : 1;
        
        var leftOffset = axis switch
        {
            EntityAxis.Inside => position * Thickness,
            EntityAxis.Outside => 0,
            EntityAxis.Center => Thickness / 2,
            _ => throw new Exception()
        };
        
        var rightOffset = axis switch
        {
            EntityAxis.Inside => 0,
            EntityAxis.Outside => position * Thickness,
            EntityAxis.Center => Thickness / 2,
            _ => throw new Exception()
        };
        
        var geometry = new HeatLossGeometry();
        
        return geometry.CreatePolygonByLine(
            new LineString( new []{
                new Coordinate(BasePoint.X, BasePoint.Y).Round(),
                new Coordinate(endPoint.X, endPoint.Y).Round()
            }),
            leftOffset,
            rightOffset);
    }
}