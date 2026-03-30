namespace HeatLoss.Domain.Enums;

public enum CardinalDirection
{
    N,
    NE,
    E,
    SE,
    S,
    SW,
    W,
    NW
}

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
            case CardinalDirection.N: return 0.1;
            case CardinalDirection.NE: return 0.1;
            case CardinalDirection.E: return 0.1;
            case CardinalDirection.SE: return 0.05;
            case CardinalDirection.S: return 0;
            case CardinalDirection.SW: return 0;
            case CardinalDirection.W: return 0.05;
            case CardinalDirection.NW: return 0.1;
            default:
                throw new NotImplementedException();
        }
    }
}