using DocumentFormat.OpenXml;
using DocumentFormat.OpenXml.Packaging;
using DocumentFormat.OpenXml.Spreadsheet;
using HeatLoss.Domain.Enums;
using HeatLoss.Domain.Extensions;
using HeatLoss.Domain.Models.Results;
using HeatLoss.Reports.Extensions;
using HeatLoss.Reports.Styles;

namespace HeatLoss.Reports;

public class ReportGenerator
{
    private readonly LengthMeasurementUnit _lengthMeasurementUnit;
    private readonly bool _combineSimilarSurfaces;
    private readonly string _reportFilePath;
    
    
    public ReportGenerator(ReportGeneratorOptions options)
    {
        _lengthMeasurementUnit = options.LengthMeasurementUnit;
        _combineSimilarSurfaces = options.CombineSimilarSurfaces;
        _reportFilePath = options.ReportFilePath;
    }

    public void GenerateReport(BuildingHeatLossResult buildingHeatLossResult)
    {
        CreateExcelFile(_reportFilePath, buildingHeatLossResult);
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
            workbookStylesPart.Stylesheet = StylesheetFactory.CreateStylesheet();
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

            foreach (var space in result.Spaces.OrderBy(x => x.Number))
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
            
        columns.Append(new Column { Min = 1, Max = 15, Width = 10, CustomWidth = true }); //Сторона света
        columns.Append(new Column { Min = 2, Max = 15, Width = 25, CustomWidth = true }); //Название конструкции
        columns.Append(new Column { Min = 3, Max = 15, Width = 10, CustomWidth = true }); //Ширина
        columns.Append(new Column { Min = 4, Max = 15, Width = 9, CustomWidth = true }); //Высота
        columns.Append(new Column { Min = 5, Max = 15, Width = 7, CustomWidth = true }); //Количество
        columns.Append(new Column { Min = 6, Max = 15, Width = 11, CustomWidth = true }); //Площадь
        columns.Append(new Column { Min = 7, Max = 15, Width = 9, CustomWidth = true }); //R
        columns.Append(new Column { Min = 8, Max = 15, Width = 11, CustomWidth = true }); //K
        columns.Append(new Column { Min = 9, Max = 15, Width = 6, CustomWidth = true }); //Разность температур
        columns.Append(new Column { Min = 10, Max = 15, Width = 11, CustomWidth = true }); //Коэффициент
        columns.Append(new Column { Min = 11, Max = 15, Width = 15, CustomWidth = true }); //Трансмиссионные теплопотери
        columns.Append(new Column { Min = 12, Max = 15, Width = 15, CustomWidth = true }); //Инфильтрационные теплопотери
        columns.Append(new Column { Min = 13, Max = 15, Width = 15, CustomWidth = true }); //Суммарные теплопотери
            
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
            for (char i = 'A'; i <= 'M'; i++)
                InsertCell(row, i.ToString(), styleIndex: 1);
        
        // Объединение ячеек
        var mergeCells = new MergeCells();
        mergeCells.Append(new MergeCell { Reference = new StringValue("B1:H1") });
        mergeCells.Append(new MergeCell { Reference = new StringValue("C2:D2") });
        
        foreach (var c in new []{'B', 'E', 'F', 'G', 'H'})
            mergeCells.Append(new MergeCell { Reference = new StringValue($"{c}2:{c}3") });
        
        foreach (var c in new []{'A', 'I', 'J', 'K', 'L', 'M'})
            mergeCells.Append(new MergeCell { Reference = new StringValue($"{c}1:{c}3") });
        
        worksheetPart.Worksheet.InsertAfter(mergeCells, sheetData);

        // Заполняем шапку
        sheetData.SetValueToCell("A1", "Сторона света");
        sheetData.SetValueToCell("B1", "Ограждающая конструкция");
        sheetData.SetValueToCell("B2", "Тип");
        sheetData.SetValueToCell("C2", $"Размеры, {_lengthMeasurementUnit.ToShortString()}");
        sheetData.SetValueToCell("C3", "Ширина");
        sheetData.SetValueToCell("D3", "Высота");
        sheetData.SetValueToCell("E2", "Кол-во");
        sheetData.SetValueToCell("F2", "Площадь, м²");
        sheetData.SetValueToCell("G2", "R, м²∙°С/Вт");
        sheetData.SetValueToCell("H2", "K, Вт/(м²∙°С)");
        sheetData.SetValueToCell("I1", "Δt, °С");
        sheetData.SetValueToCell("J1", "Поправочный коэф.");
        sheetData.SetValueToCell("K1", "Трансм. теплопотери, Вт");
        sheetData.SetValueToCell("L1", "Инфильтр. теплопотери, Вт");
        sheetData.SetValueToCell("M1", "Суммарные теплопотери, Вт");
        
        // закрепляем шапку таблицы
        var worksheet = worksheetPart.Worksheet;

        var sheetViews = worksheet.GetFirstChild<SheetViews>();
        if (sheetViews == null)
        {
            sheetViews = new SheetViews();
            worksheet.InsertAt(sheetViews, 0);
        }

        var sheetView = sheetViews.Elements<SheetView>().FirstOrDefault();
        if (sheetView == null)
        {
            sheetView = new SheetView { WorkbookViewId = 0U };
            sheetViews.Append(sheetView);
        }

        var pane = new Pane
        {
            VerticalSplit = 3,
            TopLeftCell = "A4",
            ActivePane = PaneValues.BottomLeft,
            State = PaneStateValues.Frozen
        };

        sheetView.Append(pane);

        sheetView.Append(new Selection
        {
            Pane = PaneValues.BottomLeft,
            ActiveCell = "A4",
            SequenceOfReferences = new ListValue<StringValue> { InnerText = "A4" }
        });

        worksheet.Save();
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
        AddSpaceNameRow(worksheetPart, $"{space.Number} {space.Name} (T: {space.Temperature} °C)", space.TotalHeatLoss, ref _currentRowIndex);
        
        // ограждающие конструкции
        var surfaces = _combineSimilarSurfaces ? GetCombineSimilarSurfaces(space.Surfaces) : space.Surfaces.Select(x => (x, 1)).ToList();
        foreach (var surface in surfaces)
        {
            AddSurfaceRow(sheetData, surface.Item1, surface.Item2, ref _currentRowIndex);
        }
    }

    private void AddSurfaceRow(SheetData sheetData, SurfaceHeatLossResult surfaceHeatLossResult, int amount, ref uint rowIndex)
    {
        if (surfaceHeatLossResult.TemperatureDifference == 0)
            return;
        var row = new Row { RowIndex = rowIndex };
        sheetData.Append(row);
        
        for (var i = 'A'; i <= 'M'; i++)
            InsertCell(row, i.ToString(), styleIndex: 2);
        InsertCell(row, "N", styleIndex: 4);
        
        sheetData.SetValueToCell($"A{rowIndex}", surfaceHeatLossResult.CardinalDirection?.ToShortString() ?? string.Empty); //Сторона света
        sheetData.SetValueToCell($"B{rowIndex}", GetSurfaceType(surfaceHeatLossResult)); //Тип
        sheetData.SetValueToCell($"C{rowIndex}", ConvertLength(surfaceHeatLossResult.Width)); //Ширина
        sheetData.SetValueToCell($"D{rowIndex}", ConvertLength(surfaceHeatLossResult.Height)); //Высота
        sheetData.SetValueToCell($"E{rowIndex}", amount); //Количество
        sheetData.SetValueToCell($"F{rowIndex}", surfaceHeatLossResult.Area); //Площадь
        sheetData.SetValueToCell($"G{rowIndex}", surfaceHeatLossResult.ThermalConductivity); // R
        sheetData.SetValueToCell($"H{rowIndex}", surfaceHeatLossResult.HeatTransferCoefficient); //K
        sheetData.SetValueToCell($"I{rowIndex}", surfaceHeatLossResult.TemperatureDifference); //Разность температур
        sheetData.SetValueToCell($"J{rowIndex}", surfaceHeatLossResult.AdditionalCoefficient); // Поправочный коэффициент
        sheetData.SetValueToCell($"K{rowIndex}", surfaceHeatLossResult.TransmissionHeatLoss * amount); //Трансмиссионные теплопотери
        sheetData.SetValueToCell($"L{rowIndex}", surfaceHeatLossResult.InfiltrationHeatLoss * amount); //Инфильтрационные теплопотери
        sheetData.SetValueToCell($"M{rowIndex}", surfaceHeatLossResult.TotalHeatLoss * amount); //Суммарные теплопотери
        
        // if (surfaceHeatLossResult.InfiltrationHeatLossCalculation != null)
        //     sheetData.SetValueToCell($"N{rowIndex}", surfaceHeatLossResult.InfiltrationHeatLossCalculation); //Суммарные теплопотери
        
        rowIndex++;
    }
    
    private void AddSpaceNameRow(WorksheetPart worksheetPart, string spaceName, double totalHeatLoss, ref uint rowIndex)
    {
        var sheetData = worksheetPart.Worksheet.GetFirstChild<SheetData>()!;
        var row = new Row { RowIndex = rowIndex };
        sheetData.Append(row);
        
        for (var i = 'A'; i <= 'L'; i++)
            InsertCell(row, i.ToString(), styleIndex: 3);
        InsertCell(row, "M", styleIndex: 1);
        
        var mergeCells = worksheetPart.Worksheet.Elements<MergeCells>().First();
        mergeCells.Append(new MergeCell { Reference = new StringValue($"A{rowIndex}:L{rowIndex}") });
        
        sheetData.SetValueToCell($"A{rowIndex}", spaceName);
        sheetData.SetValueToCell($"M{rowIndex}", totalHeatLoss);
        
        rowIndex++;
    }

    private double? ConvertLength(double? length)
    {
        return length == null ? null : Math.Round((double)length / _lengthMeasurementUnit.GetCoefficient(), _lengthMeasurementUnit.GetRound()) ;
    }

    private string GetSurfaceType(SurfaceHeatLossResult surfaceHeatLossResult)
    {
        switch (surfaceHeatLossResult.Type)
        {
            case SurfaceType.Door:
                return surfaceHeatLossResult.Position == SurfacePosition.Inside ? $"Дверь {surfaceHeatLossResult.Mark}" : $"Наружная дверь {surfaceHeatLossResult.Mark}";
            case SurfaceType.Wall:
                return surfaceHeatLossResult.Position == SurfacePosition.Inside ? $"Внутренняя стена {surfaceHeatLossResult.Mark}\n(с пом. {surfaceHeatLossResult.AdjacentSpaceNumber})" : $"Наружная стена {surfaceHeatLossResult.Mark}";
            case SurfaceType.Ceiling:
                return surfaceHeatLossResult.Position == SurfacePosition.Inside ? $"Внутреннее перекрытие {surfaceHeatLossResult.Mark}\n(с пом. {surfaceHeatLossResult.AdjacentSpaceNumber})" : $"Наружное перекрытие {surfaceHeatLossResult.Mark}";
            case SurfaceType.Floor:
                return $"Пол - {surfaceHeatLossResult.Comment} зона";
            case SurfaceType.Window:
                return $"Окно {surfaceHeatLossResult.Mark}";
            default:
                throw new NotImplementedException();
        }
    }

    private List<(SurfaceHeatLossResult, int)> GetCombineSimilarSurfaces(List<SurfaceHeatLossResult> surfaceHeatLossResults)
    {
        var result = new Dictionary<SurfaceHeatLossResult, int>();
        foreach (var surface in surfaceHeatLossResults)
        {
            if (result.ContainsKey(surface))
                result[surface]++;
            else
                result.Add(surface, 1);
        }
        return result.Select(pair => (pair.Key, pair.Value)).ToList();
    }
}