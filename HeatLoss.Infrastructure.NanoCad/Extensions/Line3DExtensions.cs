using HeatLoss.Infrastructure.Common.Models;
using Teigha.DatabaseServices;

namespace HeatLoss.Infrastructure.NanoCad.Extensions;

public static class Line3DExtensions
{
    public static Line ToLine(this Line3D line)
    {
        return new Line(line.StartPoint.ToPoint3d(), line.EndPoint.ToPoint3d());
    }
}