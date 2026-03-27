using DocumentFormat.OpenXml.Spreadsheet;

namespace HeatLoss.Utils.Extensions;

public static class SheetDataExtensions
{
    public static void SetValueToCell(this SheetData sheetData, string reference, string newValue)
    {
        var cell = GetCellByReference(sheetData, reference);
        if (cell != null)
            cell.CellValue = new CellValue(newValue);
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