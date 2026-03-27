using DocumentFormat.OpenXml;
using DocumentFormat.OpenXml.Spreadsheet;

namespace HeatLoss.Utils.Styles.CustomStyles;

public static class CustomFonts
{
    public static Font GetDefaultFont()
        => new Font(
            new FontSize { Val = 11 },
            new Color { Rgb = new HexBinaryValue { Value = "000000" } },
            new FontName { Val = "Times New Roman" }
        );

    public static Font GetBoldFont()
    {
        var defaultFont = GetDefaultFont();
        defaultFont.Bold = new Bold();
        return defaultFont;
    }
}