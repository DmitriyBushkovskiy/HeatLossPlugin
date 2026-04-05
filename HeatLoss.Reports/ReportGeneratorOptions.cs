using HeatLoss.Domain.Enums;

namespace HeatLoss.Reports;

public class ReportGeneratorOptions
{
    public LengthMeasurementUnit LengthMeasurementUnit  { get; init; }
    public bool CombineSimilarSurfaces { get; init; } = true;
}