using HeatLoss.Infrastructure.Common.Constants;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.NanoCad.Exceptions;
using HostMgd.ApplicationServices;
using Teigha.Colors;

namespace HeatLoss.Infrastructure.NanoCad;

public class NanoCadValidator
{
    private readonly Color _defaultColor = Color.FromRgb(255, 0, 0);
    private readonly Document _document;
    
    public NanoCadValidator(Document document)
    {
        _document = document;
        var nanocadWriter = new NanoCadDataWriter(new NanoCadParameterResolver());
        nanocadWriter.CreateLayer(Constants.ValidationLayerName, _defaultColor);
        nanocadWriter.DeleteLayerObjects(Constants.ValidationLayerName);
    }

    public void CollectionIsNotEmpty<T>(IEnumerable<T> collection)
    {
        if (collection.Any()) return;
        var entity = typeof(T) switch
        {
            { } t when t == typeof(SpaceDto) => "помещения",
            { } t when t == typeof(LinearWallDto) => "стены",
            { } t when t == typeof(OpeningDto) => "проемы",
            { } t when t == typeof(SlabDto) => "перекрытия",
            { } t when t == typeof(CoordinateGridDto) => "сетки осей",
            _ => throw new NotImplementedException(typeof(T).Name)
        };
        throw new ValidationException($"В модели отсутствуют {entity}");
    }

    public void ValidateProjectData(ProjectDataDto projectData)
    {
        if (Math.Abs(projectData.OutsideTemperature - 100) < 1)
        {
            throw new ValidationException("Установите температуру наружного воздуха в параметрах проекта (ProjectData)");
        }
        
        if (projectData.BuildingHeight <= 0)
        {
            throw new ValidationException("Укажите высоту здания в параметрах проекта (ProjectData)");
        }
        
        if (projectData.WindSpeed < 0)
        {
            throw new ValidationException("Укажите расчетную скорость ветра в холодный период года в параметрах проекта (ProjectData)");
        }
        
        if (projectData.WindPressureCoefficient < 0)
        {
            throw new ValidationException("Укажите коэффициент учета изменения скоростного давления ветра в параметрах проекта (ProjectData)");
        }
    }
    
    public void ValidateMaterials(Dictionary<string, double> materials)
    {
        var ids = new List<string>();
        foreach (var material in materials)
        {
            if (material.Value <= 0)
                ids.Add(material.Key);
        }

        if (ids.Any())
            throw new ValidationException($"Указан неверный коэффициент теплопроводности для следующих материалов: {string.Join(", ", ids)}");
    }
}