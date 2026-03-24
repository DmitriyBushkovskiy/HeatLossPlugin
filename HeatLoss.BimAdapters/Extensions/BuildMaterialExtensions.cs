using BIMStructureMgd.ObjectProperties;

namespace HeatLoss.BimAdapters.Extensions;

public static class BuildMaterialExtensions
{
    public static string GetParameter(this BuildMaterial material, string parameterName)
    {
        return material.GetElementData().Parameters.FirstOrDefault(x => x.Name == parameterName)?.Value ?? string.Empty;
    }
}