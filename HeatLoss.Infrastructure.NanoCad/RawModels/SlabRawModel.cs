using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.Geometry.Extensions;
using HeatLoss.Infrastructure.NanoCad.Extensions;
using NetTopologySuite.Geometries;
using Teigha.Geometry;

namespace HeatLoss.Infrastructure.NanoCad.RawModels;

public class SlabRawModel: IParametric
{
    public Point3d BasePoint { get; set; }
    public List<Parameter> Parameters { get; set; }
    public List<Coordinate> Coordinates { get; set; }

    public SlabRawModel(BuildingSlab slab)
    {
        BasePoint = slab.BasePoint;
        Parameters = slab.GetElementData().Parameters.ToList();
        Coordinates = slab.GetContour()
            .ConvertTo(false)
            .ToVertex2ds()
            .Select(x => new Coordinate(x.Position.X, x.Position.Y).Round())
            .ToList();
    }

    public Polygon GetPolygon()
    {
        var slabCoordinates = new List<Coordinate>(Coordinates);
        slabCoordinates.Add(slabCoordinates.First());
        return new Polygon(new LinearRing(slabCoordinates.ToArray()));
    }
    
    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;
}