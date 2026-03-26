using HeatLoss.BimAdapters;
using HeatLoss.Domain.Calculation;
using HeatLoss.Domain.Enums;
using HeatLoss.Utils;
using HostMgd.ApplicationServices;
using HostMgd.EditorInput;
using Teigha.Runtime;

namespace HeatLoss.Plugin;

public class Plugin
{
    private Building? _building;
    private Document _document;
    private Editor _editor;

    public Plugin()
    {
        _document = Application.DocumentManager.MdiActiveDocument;
        _editor = _document.Editor;
    }

    //Метод Template1 реализует команду Command1
    [CommandMethod("HL_GET_BUILDING_DATA")]
    public void Foo_GetBuildingData()
    {
        var na = new NanoCadAdapter();
        _building = na.InitBuildingInfo();
        var rr = 1;
    }
    
    //Метод Template1 реализует команду Command1
    [CommandMethod("HL_CALCULATE")]
    public void Foo_Calculate()
    {
        if (_building == null)
        {
            _editor.WriteMessage("No building found");
            return;
        }

        var calculator = new Calculator();
        var result = calculator.Calculate(_building);
    }
    
    [CommandMethod("HL_Print_building_data")]
    public void Foo_PrintBuildingData()
    {
        if (_building == null)
        {
            _editor.WriteMessage("No building found");
            return;
        }

        foreach (var space in _building.Spaces.OrderBy(x => x.Number))
        {
            _editor.WriteMessage($"{space.Number} {space.Name}, T:{space.Temperature} °C");
            _editor.WriteMessage("-Стены:");
            foreach (var wall in space.Walls)
            {
                _editor.WriteMessage($"--{(wall.Position == SurfacePosition.Inside ? "Внутренняя" : "Наружная")} стена{(wall.Position == SurfacePosition.Inside ? wall.AdjacentSpaceNumber : "")} К:{wall.ThermalConductivity}");
                if (wall.Openings.Count > 0)
                {
                    foreach (var opening in wall.Openings)
                    {
                        _editor.WriteMessage($"---{(opening.Type == OpeningType.Door ? "Дверь" : "Окно")} {opening.Width}x{opening.Height} K:{opening.ThermalConductivity}");
                    }
                    
                }
            }

            if (space.FloorAreas.Count > 0)
            {
                _editor.WriteMessage("-Зоны пола:");
                foreach (var floorArea in space.FloorAreas.OrderBy(x => x.FloorAreaNumber))
                {
                    _editor.WriteMessage($"--{floorArea.FloorAreaNumber}: {floorArea.Area}m^2");
                }
            }
            
            if (space.Ceilings.Count > 0)
            {
                _editor.WriteMessage("-Перекрытия:");
                foreach (var ceiling in space.Ceilings.OrderBy(x => x.AdjacentSpaceNumber))
                {
                    _editor.WriteMessage($"--{ceiling.Position}{(ceiling.Position == SurfacePosition.Inside ? $" ->{ceiling.AdjacentSpaceNumber}" : "")}: {ceiling.Area}m^2 K:{ceiling.ThermalConductivity}");
                    
                }
            }
        }
    }
}