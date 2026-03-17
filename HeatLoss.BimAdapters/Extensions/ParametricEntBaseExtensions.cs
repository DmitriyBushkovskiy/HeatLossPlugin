using BIMStructureMgd.DatabaseObjects;

namespace HeatLoss.BimAdapters.Extensions;

public static class ParametricEntBaseExtensions
{
    public static string GetParameter(this ParametricEntBase entity, string parameterName)
    {
        return entity.GetElementData().Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;
    }
}