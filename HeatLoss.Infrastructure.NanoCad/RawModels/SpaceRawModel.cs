using System.Globalization;
using BIMStructureMgd.DatabaseObjects;
using BIMStructureMgd.ObjectProperties;
using HeatLoss.Geometry.Extensions;
using HeatLoss.Infrastructure.NanoCad.Extensions;
using HeatLoss.Infrastructure.NanoCad.Domain;
using NetTopologySuite.Geometries;

namespace HeatLoss.Infrastructure.NanoCad.RawModels;

public class SpaceRawModel: IParametric
{
    public long Id { get; }
    public string Name { get; }
    public string Number { get; }
    public double BottomLevel { get; }
    public double Height { get; }
    public List<Coordinate> Coordinates { get; }
    public List<Parameter> Parameters { get; set; }

    public SpaceRawModel(SpaceEntity spaceEntity)
    {
        Id = spaceEntity.Id.ToLong();
        Name = spaceEntity.Name;
        Number = spaceEntity.Number;
        Height = spaceEntity.Height;
        Parameters = spaceEntity.GetElementData().Parameters.ToList();
        BottomLevel = GetBottomLevel();
        Coordinates = spaceEntity.GetFloorContours()
            .Single()
            .ConvertTo(false)
            .ToVertex2ds()
            .Select(x => new Coordinate(x.Position.X, x.Position.Y).Round())
            .ToList();
    }
    
    private double GetBottomLevel()
        => double.TryParse(GetParameter("AEC_ELEMENT_POS_Z"), NumberStyles.Any , CultureInfo.InvariantCulture, out var level)
        ? level
        : 0;

    public IEnumerable<SpaceEdgeModel> GetSpaceEdges()
    {
        for (var i = 0; i < Coordinates.Count; i++)
            yield return new SpaceEdgeModel(Coordinates[i], Coordinates[i == Coordinates.Count - 1 ? 0 : i + 1]);
    }
    
    public SpaceModel ToSpaceModel()
    {
        return new SpaceModel
        {
            Id = Id,
            Name = Name,
            Number = Number,
            BottomLevel = BottomLevel,
            Height = Height,
            Temperature = double.TryParse(Parameters.FirstOrDefault(x => x.Name == "HL_SPACE_TEMPERATURE")?.Value, NumberStyles.Any , CultureInfo.InvariantCulture, out var temperature)
                ? temperature
                : 0,
        };
    }
    //TODO: параметр HL_SPACE_TEMPERATURE добавляется к помещениям вручную
    
    public string GetParameter(string parameterName)
        => Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;
}