using DocumentFormat.OpenXml.Spreadsheet;

namespace HeatLoss.Utils.Styles.CustomStyles;

public static class CustomAlignments
{
    public static Alignment GetCenterCenterAlignment()
        => new() {
        Horizontal = HorizontalAlignmentValues.Center,
        Vertical = VerticalAlignmentValues.Center,
        WrapText = true
    };
}