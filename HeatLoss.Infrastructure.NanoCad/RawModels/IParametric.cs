using BIMStructureMgd.ObjectProperties;

namespace HeatLoss.Infrastructure.NanoCad.RawModels;

public interface IParametric
{
    List<Parameter> Parameters { get; set; }

    string GetParameter(string parameterName);
}