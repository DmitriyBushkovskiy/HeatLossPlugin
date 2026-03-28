using DocumentFormat.OpenXml.Spreadsheet;

namespace HeatLoss.Utils.Extensions;

public static class SheetDataExtensions
{
    // TODO: рефакторинг DRY
    public static void SetValueToCell(this SheetData sheetData, string reference, string newValue)
    {
        var cell = sheetData.GetCellByReference(reference);
        if (cell != null)
            cell.CellValue = new CellValue(newValue);
    }
    
    public static void SetValueToCell(this SheetData sheetData, string reference, int newValue)
    {
        var cell = sheetData.GetCellByReference(reference);
        if (cell != null)
        {
            cell.CellValue = new CellValue(newValue);
            cell.DataType = null;
        }
    }
    
    public static void SetValueToCell(this SheetData sheetData, string reference, double? newValue)
    {
        var cell = sheetData.GetCellByReference(reference);
        if (cell != null)
        {
            cell.CellValue = newValue.HasValue ? new CellValue(newValue.Value) : null;
            cell.DataType = null;
        }
    }
    
    private static Cell? GetCellByReference(this SheetData sheetData, string cellReference)
    {
        var rowNumber = new string(cellReference.SkipWhile(char.IsLetter).ToArray());
        var rowIndex = uint.Parse(rowNumber);
        
        var row = sheetData.Elements<Row>().FirstOrDefault(r => r.RowIndex!.Value == rowIndex);
        
        if (row == null)
            return null;

        var columnLetter = new string(cellReference.TakeWhile(char.IsLetter).ToArray());
        
        return row.Elements<Cell>().FirstOrDefault(c => 
            c.GetColumnLetterFromCell() == columnLetter);
    }
}