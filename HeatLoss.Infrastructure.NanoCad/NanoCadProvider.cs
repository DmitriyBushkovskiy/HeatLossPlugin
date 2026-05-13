using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;
using HostMgd.EditorInput;
using Color = System.Drawing.Color;

namespace HeatLoss.Infrastructure.NanoCad;

public class NanoCadProvider: IBimProvider
{
    private readonly Editor _editor;
    private readonly NanoCadDataWriter _writer;
    private readonly NanoCadDataExtractor _extractor;
    public IParameterResolver ParameterResolver { get; set; }
    public string DocumentPath { get; }

    public NanoCadProvider()
    {
        var document = HostMgd.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
        DocumentPath = document.Name;
        _editor = document.Editor;
        _extractor = new NanoCadDataExtractor(document);
        ParameterResolver = new NanoCadParameterResolver();
        _writer = new NanoCadDataWriter(ParameterResolver);
    }

    public BimExtractedData ExtractBuildingData()
    {
        return _extractor.ExtractData();
    }

    public void SaveHeatLossToModel(BuildingHeatLossResultDto heatLossResult)
    {
        _writer.SaveHeatLossToModel(heatLossResult);
    }

    public void WriteMessage(string message)
    {
        _writer.WriteMessage(message);
    }

    public void PrintGeometry(IEnumerable<IDrawable> geometries, string layer, Color? color)
    {
        _writer.PrintGeometry(geometries, layer, color);
    }
}