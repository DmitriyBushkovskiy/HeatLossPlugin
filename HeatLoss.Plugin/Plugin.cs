using HeatLoss.BimAdapters;
using Teigha.Runtime;

namespace HeatLoss.Plugin;

public class Plugin
{
    //Метод Template1 реализует команду Command1
    [CommandMethod("Foo_Bar")]
    public void Foo_Bar()
    {
        var na = new NanoCadAdapter();
        na.InitBuildingInfo();
    }
}