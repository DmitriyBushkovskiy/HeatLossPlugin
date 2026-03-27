using DocumentFormat.OpenXml;
using DocumentFormat.OpenXml.Spreadsheet;

namespace HeatLoss.Utils.Styles.CustomStyles;

public static class CustomBorders
{
    public static Border GetDefaultBorder() 
        => new (new LeftBorder(),
    new RightBorder(),
    new TopBorder(),
    new BottomBorder(),
    new DiagonalBorder());
    
    public static Border GetThinBorder() => 
        new (new LeftBorder(new Color { Auto = true }) { Style = BorderStyleValues.Thin },
    new RightBorder(new Color { Indexed = (UInt32Value)64U } ) { Style = BorderStyleValues.Thin },
    new TopBorder(new Color { Auto = true }) { Style = BorderStyleValues.Thin },
    new BottomBorder(new Color { Indexed = (UInt32Value)64U }) { Style = BorderStyleValues.Thin },
    new DiagonalBorder());
    
    public static Border GetMediumBorder() 
        => new (
    new LeftBorder(new Color { Auto = true }) { Style = BorderStyleValues.Medium },
    new RightBorder(new Color { Indexed = (UInt32Value)64U }) { Style = BorderStyleValues.Medium },
    new TopBorder(new Color { Auto = true }) { Style = BorderStyleValues.Medium },
    new BottomBorder(new Color { Indexed = (UInt32Value)64U }) { Style = BorderStyleValues.Medium },
    new DiagonalBorder());
}