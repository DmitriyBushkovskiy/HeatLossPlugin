using HeatLoss.Infrastructure.Common.Enums;

namespace HeatLoss.Infrastructure.Common;

public interface IParameterResolver
{
    string GetParameterName(ParameterKey key);
}