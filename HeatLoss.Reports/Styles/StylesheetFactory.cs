using DocumentFormat.OpenXml.Spreadsheet;
using HeatLoss.Reports.Styles.CustomStyles;

namespace HeatLoss.Reports.Styles;

public static class StylesheetFactory
{
    public static Stylesheet CreateStylesheet()
    {
        return new Stylesheet(
            // шрифты
            new Fonts(
                // 0 - по-умолчанию
                CustomFonts.GetDefaultFont(),
                // 1 - по-умолчанию жирный
                CustomFonts.GetBoldFont()
            ),

            // заливка
            new Fills(
                // 0 - без заливки
                CustomFills.GetDefaultFill(),
                CustomFills.GetDefaultFill(),
                // 1 - сплошная серая
                CustomFills.GetGreySolidFill()
            ),

            // границы
            new Borders(
                // 0 - без границ
                CustomBorders.GetDefaultBorder(),
                // 1 - тонкая
                CustomBorders.GetThinBorder(),
                // 2 - средняя
                CustomBorders.GetMediumBorder()
            ),

            // стили ячеек
            new CellFormats(
                // 0 - по-умолчанию
                new CellFormat(CustomAlignments.GetCenterCenterAlignment()) { FontId = 0, FillId = 0, BorderId = 0 },
                // 1 - шапка таблицы
                new CellFormat(CustomAlignments.GetCenterCenterAlignment())
                {
                    FontId = 1,
                    FillId = 2, //Id - работает только при FillId > 1
                    BorderId = 2,
                    ApplyFill = true
                },
                // 2 - ячейки таблицы
                new CellFormat(CustomAlignments.GetCenterCenterAlignment())
                {
                    FontId = 0,
                    FillId = 0,
                    BorderId = 1,
                },
                // 3 - Наименование помещения
                new CellFormat(CustomAlignments.GetCenterCenterAlignment())
                {
                    FontId = 1,
                    FillId = 0,
                    BorderId = 2,
                }
            )
        );
    }
}