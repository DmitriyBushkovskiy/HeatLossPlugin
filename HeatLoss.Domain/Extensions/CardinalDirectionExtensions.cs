using HeatLoss.Domain.Enums;

namespace HeatLoss.Domain.Extensions;

public static class CardinalDirectionExtensions
{
    public static string ToShortString(this CardinalDirection direction)
    {
        switch(direction)
        {
            case CardinalDirection.N: return "С";
            case CardinalDirection.NE: return "СВ";
            case CardinalDirection.E: return "В";
            case CardinalDirection.SE: return "ЮВ";
            case CardinalDirection.S: return "Ю";
            case CardinalDirection.SW: return "ЮЗ";
            case CardinalDirection.W: return "З";
            case CardinalDirection.NW: return "СЗ";
            default:
                throw new NotImplementedException();
        }
    }
    
    public static double GetCoefficient(this CardinalDirection direction)
    {
        switch(direction)
        {
            case CardinalDirection.N:
            case CardinalDirection.NE:
            case CardinalDirection.E:
            case CardinalDirection.NW: return 0.1;
            case CardinalDirection.SE:
            case CardinalDirection.W: return 0.05;
            case CardinalDirection.S:
            case CardinalDirection.SW: return 0;
            default:
                throw new NotImplementedException();
        }
    }
}