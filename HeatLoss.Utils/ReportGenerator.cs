using DocumentFormat.OpenXml;
using DocumentFormat.OpenXml.Packaging;
using DocumentFormat.OpenXml.Spreadsheet;
using HeatLoss.Domain.Results;
using HeatLoss.Utils.Extensions;
using HeatLoss.Utils.Styles;

namespace HeatLoss.Utils;

public class ReportGenerator
{
    public void GenerateReport(BuildingHeatLossResult buildingHeatLossResult)
    {
        var now = DateTime.Now;
        string filePath = $"D:\\foo\\MyNewExcelFile-{now.ToString().Replace(':', '_')}.xlsx";
        CreateExcelFile(filePath, buildingHeatLossResult);
    }

    private void CreateExcelFile(string filePath, BuildingHeatLossResult result)
    {
        var directory = Path.GetDirectoryName(filePath);
        if (!string.IsNullOrEmpty(directory) && !Directory.Exists(directory))
        {
            Directory.CreateDirectory(directory);
        }
        
        using (var excelDocument = SpreadsheetDocument.Create(filePath, SpreadsheetDocumentType.Workbook))
        {
            var workbookPart = excelDocument.AddWorkbookPart();
            workbookPart.Workbook = new Workbook();
            var worksheetPart = workbookPart.AddNewPart<WorksheetPart>();
            
            worksheetPart.Worksheet = new Worksheet(new SheetData());
            
            // Набор стилей
            var workbookStylesPart = workbookPart.AddNewPart<WorkbookStylesPart>();
            workbookStylesPart.Stylesheet = StylesheetGenerator.GenerateStyleSheet();
            workbookStylesPart.Stylesheet.Save();
            
            var columns = worksheetPart.Worksheet.GetFirstChild<Columns>();
            var needToInsertColumns = false;
            if (columns == null)
            {
                columns = new Columns();
                needToInsertColumns = true;
            }
            
            columns.Append(new Column { Min = 1, Max = 15, Width = 20, CustomWidth = true }); //Сторона света
            columns.Append(new Column { Min = 2, Max = 15, Width = 15, CustomWidth = true }); //Название конструкции
            columns.Append(new Column { Min = 3, Max = 15, Width = 15, CustomWidth = true }); //Ширина
            columns.Append(new Column { Min = 4, Max = 15, Width = 15, CustomWidth = true }); //Высота
            columns.Append(new Column { Min = 5, Max = 15, Width = 15, CustomWidth = true }); //Количество
            columns.Append(new Column { Min = 6, Max = 15, Width = 10, CustomWidth = true }); //R
            columns.Append(new Column { Min = 7, Max = 15, Width = 10, CustomWidth = true }); //K
            columns.Append(new Column { Min = 8, Max = 15, Width = 20, CustomWidth = true }); //Разность температур
            columns.Append(new Column { Min = 9, Max = 15, Width = 15, CustomWidth = true }); //Коэффициент
            columns.Append(new Column { Min = 10, Max = 15, Width = 20, CustomWidth = true }); //Теплопотери
            
            if (needToInsertColumns)
                worksheetPart.Worksheet.InsertAt(columns, 0);
            
            var sheets = workbookPart.Workbook.AppendChild(new Sheets());
            var sheet = new Sheet 
            { 
                Id = workbookPart.GetIdOfPart(worksheetPart), 
                SheetId = 1, 
                Name = "Таблица теплопотерь" 
            };
            sheets.Append(sheet);
            
            AddHeader(worksheetPart);

            if (result != null)
            {
                
            }
            
            workbookPart.Workbook.Save();
        }
    }

    private void AddHeader(WorksheetPart worksheetPart)
    {
        var sheetData = worksheetPart.Worksheet.GetFirstChild<SheetData>()!;
        var firstRow = new Row { RowIndex = 1 };
        var secondRow = new Row { RowIndex = 2 };
        var thirdRow = new Row { RowIndex = 3 };
        sheetData.Append(firstRow);
        sheetData.Append(secondRow);
        sheetData.Append(thirdRow);
        
        // Стиль для шапки таблицы
        foreach (var row in new[]{firstRow, secondRow, thirdRow})
            for (char i = 'A'; i <= 'J'; i++)
                InsertCell(row, i.ToString(), styleIndex: 1);
        
        // Объединение ячеек
        var mergeCells = new MergeCells();
        mergeCells.Append(new MergeCell { Reference = new StringValue("B1:G1"), });
        mergeCells.Append(new MergeCell { Reference = new StringValue("C2:D2") });
        
        foreach (var c in new []{'B', 'E', 'F', 'G'})
            mergeCells.Append(new MergeCell { Reference = new StringValue($"{c}2:{c}3") });
        
        foreach (var c in new []{'A', 'H', 'I', 'J'})
            mergeCells.Append(new MergeCell { Reference = new StringValue($"{c}1:{c}3") });
        
        worksheetPart.Worksheet.InsertAfter(mergeCells, sheetData);

        // Заполняем шапку
        sheetData.SetValueToCell("A1", "Сторона света");
        sheetData.SetValueToCell("B1", "Ограждающая конструкция");
        sheetData.SetValueToCell("B2", "Тип");
        sheetData.SetValueToCell("C2", "Размеры");
        sheetData.SetValueToCell("C3", "Ширина");
        sheetData.SetValueToCell("D3", "Высота");
        sheetData.SetValueToCell("E2", "Количество");
        sheetData.SetValueToCell("F2", "R");
        sheetData.SetValueToCell("G2", "K");
        sheetData.SetValueToCell("H1", "Разность температур");
        sheetData.SetValueToCell("I1", "Поправочный коэффициент");
        sheetData.SetValueToCell("J1", "Теплопотери");
    }
    
    private static void InsertCell(Row row, string columnLetter, string val = "", CellValues type = CellValues.String, uint styleIndex = 0)
    {
        var newCell = new Cell { CellReference = $"{columnLetter}{row.RowIndex}", StyleIndex = styleIndex };
        row.Append(newCell);
        
        newCell.CellValue = new CellValue(val);
        newCell.DataType = new EnumValue<CellValues>(type);
    }
    
    // private void AddDataRow(SheetData sheetData, string parameter, string value, string unit)
    // {
    //     Row row = new Row();
    //     row.Append(
    //         CreateCell(parameter, CellValues.String),
    //         CreateCell(value, CellValues.String),
    //         CreateCell(unit, CellValues.String)
    //     );
    //     sheetData.Append(row);
    // }
}