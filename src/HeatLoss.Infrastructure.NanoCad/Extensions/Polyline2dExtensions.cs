using Teigha.DatabaseServices;

namespace HeatLoss.Infrastructure.NanoCad.Extensions;

public static class Polyline2dExtensions
{
    public static IEnumerable<Vertex2d> ToVertex2ds(this Polyline2d? polyline)
    {
        if  (polyline == null)
            yield break;
        foreach (var obj in polyline)
        {
            if (obj is Vertex2d vertex2d)
                yield return vertex2d;
        }
    }
}