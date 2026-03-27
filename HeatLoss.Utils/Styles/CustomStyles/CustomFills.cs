using DocumentFormat.OpenXml;
using DocumentFormat.OpenXml.Spreadsheet;

namespace HeatLoss.Utils.Styles.CustomStyles;

public static class CustomFills
{
    public static Fill GetDefaultFill()
        => new (new PatternFill { PatternType = PatternValues.None });
    
    public static Fill GetGreySolidFill()
        => new (new PatternFill(
                new ForegroundColor { Rgb = new HexBinaryValue { Value = "FFD3D3D3" } })
            { PatternType = PatternValues.Solid });
}