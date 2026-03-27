using DocumentFormat.OpenXml;
using DocumentFormat.OpenXml.Packaging;
using DocumentFormat.OpenXml.Spreadsheet;
using HeatLoss.Domain.Calculation;
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

            CreateColumns(worksheetPart);
            
            var sheets = workbookPart.Workbook.AppendChild(new Sheets());
            var sheet = new Sheet 
            { 
                Id = workbookPart.GetIdOfPart(worksheetPart), 
                SheetId = 1, 
                Name = "Таблица теплопотерь" 
            };
            sheets.Append(sheet);
            
            AddHeader(worksheetPart);

            foreach (var space in result.Spaces)
            {
                AddSpace(worksheetPart, space);
            }
            
            workbookPart.Workbook.Save();
        }
    }

    private void CreateColumns(WorksheetPart worksheetPart)
    {
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
            for (char i = 'A'; i <= 'K'; i++)
                InsertCell(row, i.ToString(), styleIndex: 1);
        
        // Объединение ячеек
        var mergeCells = new MergeCells();
        mergeCells.Append(new MergeCell { Reference = new StringValue("B1:H1") });
        mergeCells.Append(new MergeCell { Reference = new StringValue("C2:D2") });
        
        foreach (var c in new []{'B', 'E', 'F', 'G', 'H'})
            mergeCells.Append(new MergeCell { Reference = new StringValue($"{c}2:{c}3") });
        
        foreach (var c in new []{'A', 'I', 'J', 'K'})
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
        sheetData.SetValueToCell("F2", "Площадь");
        sheetData.SetValueToCell("G2", "R");
        sheetData.SetValueToCell("H2", "K");
        sheetData.SetValueToCell("I1", "Разность температур");
        sheetData.SetValueToCell("J1", "Поправочный коэффициент");
        sheetData.SetValueToCell("K1", "Теплопотери");
    }
    
    private static void InsertCell(Row row, string columnLetter, string val = "", CellValues type = CellValues.String, uint styleIndex = 0)
    {
        var newCell = new Cell { CellReference = $"{columnLetter}{row.RowIndex}", StyleIndex = styleIndex };
        row.Append(newCell);
        
        newCell.CellValue = new CellValue(val);
        newCell.DataType = new EnumValue<CellValues>(type);
    }

    private uint _currentRowIndex = 4;
    
    private void AddSpace(WorksheetPart worksheetPart, SpaceHeatLossResult space)
    {
        var sheetData = worksheetPart.Worksheet.GetFirstChild<SheetData>()!;
        // наименование помещения
        AddSpaceNameRow(worksheetPart, $"{space.Number} {space.Name} (T: {space.Temperature} °C)", ref _currentRowIndex);
        
        // ограждающие конструкции
        foreach (var surface in space.Surfaces)
        {
            AddSurfaceRow(sheetData, surface, ref _currentRowIndex);
        }
    }

    private void AddSurfaceRow(SheetData sheetData, SurfaceHeatLossResult surfaceHeatLossResult, ref uint rowIndex)
    {
        var row = new Row { RowIndex = rowIndex };
        sheetData.Append(row);
        
        for (var i = 'A'; i <= 'K'; i++)
            InsertCell(row, i.ToString(), styleIndex: 2);
        
        sheetData.SetValueToCell($"A{rowIndex}", "");
        sheetData.SetValueToCell($"B{rowIndex}", surfaceHeatLossResult.Type.ToString());
        sheetData.SetValueToCell($"C{rowIndex}", "");
        sheetData.SetValueToCell($"D{rowIndex}", "");
        sheetData.SetValueToCell($"E{rowIndex}", "");
        sheetData.SetValueToCell($"F{rowIndex}", surfaceHeatLossResult.Area.ToString());
        sheetData.SetValueToCell($"G{rowIndex}", surfaceHeatLossResult.ThermalConductivity.ToString());
        sheetData.SetValueToCell($"H{rowIndex}", surfaceHeatLossResult.HeatTransferCoefficient.ToString());
        sheetData.SetValueToCell($"I{rowIndex}", surfaceHeatLossResult.TemperatureDifference.ToString());
        sheetData.SetValueToCell($"J{rowIndex}", "");
        sheetData.SetValueToCell($"K{rowIndex}", surfaceHeatLossResult.HeatLoss.ToString());
        
        rowIndex++;
    }
    
    private void AddSpaceNameRow(WorksheetPart worksheetPart, string value, ref uint rowIndex)
    {
        var sheetData = worksheetPart.Worksheet.GetFirstChild<SheetData>()!;
        var row = new Row { RowIndex = rowIndex };
        sheetData.Append(row);
        
        for (var i = 'A'; i <= 'K'; i++)
            InsertCell(row, i.ToString(), styleIndex: 2);
        
        var mergeCells = worksheetPart.Worksheet.Elements<MergeCells>().First();
        mergeCells.Append(new MergeCell { Reference = new StringValue($"A{rowIndex}:K{rowIndex}") });
        
        sheetData.SetValueToCell($"A{rowIndex}", value);
        
        rowIndex++;
    }
}