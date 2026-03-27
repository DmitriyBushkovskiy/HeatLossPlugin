using HeatLoss.Utils.Enums;

namespace HeatLoss.Utils;

public class ReportGeneratorOptions
{
    public LengthMeasurementUnit LengthMeasurementUnit  { get; set; }
    public bool CombineSimilarSurfaces { get; set; } = true;
}