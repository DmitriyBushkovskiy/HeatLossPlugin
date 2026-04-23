namespace HeatLoss.Infrastructure.Common.Models;

public struct Parameter
{
    public readonly string Name;
    public readonly string Value;

    public Parameter(string name, string value)
    {
        Name = name;
        Value = value;
    }
}