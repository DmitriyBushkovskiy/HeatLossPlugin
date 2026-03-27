namespace HeatLoss.Utils.Enums;

public enum LengthMeasurementUnit
{
    Meter,
    Millimeter
}

public static class LengthMeasurementUnitExtensions
{
    public static string ToLongString(this LengthMeasurementUnit unit)
    {
        switch(unit)
        {
            case LengthMeasurementUnit.Meter:
                return "метр";
            case LengthMeasurementUnit.Millimeter:
                return "миллиметр";
            default:
                throw new NotImplementedException();
        }
    }
    
    public static string ToShortString(this LengthMeasurementUnit unit)
    {
        switch(unit)
        {
            case LengthMeasurementUnit.Meter:
                return "м.";
            case LengthMeasurementUnit.Millimeter:
                return "мм.";
            default:
                throw new NotImplementedException();
        }
    }
    
    public static double GetCoefficient(this LengthMeasurementUnit unit)
    {
        switch(unit)
        {
            case LengthMeasurementUnit.Meter:
                return 1000;
            case LengthMeasurementUnit.Millimeter:
                return 1;
            default:
                throw new NotImplementedException();
        }
    }
    
    public static int GetRound(this LengthMeasurementUnit unit)
    {
        switch(unit)
        {
            case LengthMeasurementUnit.Meter:
                return 2;
            case LengthMeasurementUnit.Millimeter:
                return 0;
            default:
                throw new NotImplementedException();
        }
    }
}