using BIMStructureMgd.DatabaseObjects;

namespace HeatLoss.Infrastructure.NanoCad.RawModels;

public class CoordinateGridRawModel
{
    public CoordinateGrid.AxisData AxisZ { get; }

    public CoordinateGridRawModel(CoordinateGridRef coordinateGridRef)
    {
        AxisZ = coordinateGridRef.AxisZ;
    }
}