using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;
using HeatLoss.Infrastructure.NanoCad.Extensions;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using Teigha.Colors;
using Teigha.DatabaseServices;
using Teigha.Runtime;
using Exception = System.Exception;

namespace HeatLoss.Infrastructure.NanoCad;

public class NanoCadDataWriter
{
    private readonly Document _document;
    private readonly Editor _editor;
    private readonly IParameterResolver _parameterResolver;

    public NanoCadDataWriter(IParameterResolver parameterResolver)
    {
        _document = HostMgd.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
        _editor = _document.Editor;
        _parameterResolver = parameterResolver;
    }
    
    public void SaveHeatLossToModel(BuildingHeatLossResultDto heatLossResult)
    {
        var db = _document.Database;
        
        var tr = db.TransactionManager.StartTransaction();
        var filter = new SelectionFilter(new[] {
            new TypedValue((int)DxfCode.Start, RXObject.GetClass(typeof(SpaceEntity)).DxfName)
        });
        var promptResult = _editor.SelectAll(filter);
        
        var selectionSet = promptResult.Status == PromptStatus.OK ? promptResult.Value : null;
        
        if (selectionSet == null || selectionSet.Count < 1)
            selectionSet = new SelectionSet();
        
        foreach (SelectedObject selectedObject in selectionSet)
        {
            var dbObject = tr.GetObject(selectedObject.ObjectId, OpenMode.ForWrite);
            if (dbObject is SpaceEntity res)
            {
                var spaceHeatLossResult = heatLossResult.Spaces.FirstOrDefault(x => x.Number == res.Number && x.Name == res.Name);
                if (spaceHeatLossResult != null)
                {
                    res.GetElementData().SetParameter(_parameterResolver.GetParameterName(ParameterKey.SpaceHeatLoss), spaceHeatLossResult.TotalHeatLoss);
                    //TODO: параметр HL_HEAT_LOSS добавляется к помещениям вручную
                }
            }
        }
        tr.Commit();
    }

    public void WriteMessage(string message)
    {
        _editor.WriteMessage(message);
    }

    public void PrintGeometry(IEnumerable<IDrawable> geometries, string layer, System.Drawing.Color? color)
    {
        var db = _document.Database;
        var tr = db.TransactionManager.StartTransaction();
        
        var bt = (BlockTable)tr.GetObject(db.BlockTableId, OpenMode.ForRead);
        var btr = (BlockTableRecord)tr.GetObject(bt[BlockTableRecord.ModelSpace], OpenMode.ForWrite);

        foreach (var geometry in geometries)
        {
            switch (geometry)
            {
                case Line3D ln:
                    var line = ln.ToLine();
                    line.Layer = layer;
                    if (color != null)
                        line.Color = Color.FromColor(color.Value);
                    btr.AppendEntity(line);
                    tr.AddNewlyCreatedDBObject(line, true);
                    break;
                
                case Polyline3D pl:
                    foreach (var pll in pl.Lines)
                    {
                        var line1 = pll.ToLine();
                        line1.Layer = layer;
                        if (color != null)
                            line1.Color = Color.FromColor(color.Value);
                        btr.AppendEntity(line1);
                        tr.AddNewlyCreatedDBObject(line1, true);
                    }
                    break;

                default:
                    throw new Exception();
            }
        }
        
        tr.Commit();
    }
}