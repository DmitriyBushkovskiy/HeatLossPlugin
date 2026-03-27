using DocumentFormat.OpenXml.Spreadsheet;

namespace HeatLoss.Utils.Extensions;

public static class CellExtensions
{
    public static string GetColumnLetterFromCell(this Cell cell)
    {
        return cell.CellReference == null ? string.Empty : new string(cell.CellReference.Value!.TakeWhile(char.IsLetter).ToArray());
    }
}