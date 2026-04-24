using System.Globalization;
using BIMStructureMgd.DatabaseObjects;
using HeatLoss.Domain.Enums;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Enums;
using HeatLoss.Infrastructure.Common.Models;
using HeatLoss.Infrastructure.NanoCad.Extensions;

namespace HeatLoss.Infrastructure.NanoCad;

public class NanoCadMapper
{
    private readonly NanoCadParameterResolver _parameterResolver = new();

    public SpaceDto ToSpaceDto(SpaceEntity spaceEntity)
    {
        var parameters = spaceEntity.GetElementData().Parameters
            .Select(x => new Parameter(x.Name, x.Value))
            .ToList();
        var bottomLevel = double.TryParse(parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.SpaceBottomLevel)).Value,
            NumberStyles.Any, CultureInfo.InvariantCulture, out var level)
            ? level
            : 0;
        
        return new SpaceDto
        {
            Id = spaceEntity.Id.ToLong(),
            Name = spaceEntity.Name,
            Number = spaceEntity.Number,
            Height = spaceEntity.Height,
            Parameters = parameters,
            BottomLevel = bottomLevel,
            Coordinates = spaceEntity.GetFloorContours()
                .Single()
                .ConvertTo(false)
                .ToVertex2ds()
                .Select(x => new Point3D(x.Position.X, x.Position.Y, bottomLevel).Round())
                .ToList()
        };
    }
    
    public LinearWallDto ToWallDto(LinearBuildingWall wall)
    {
        var parameters = wall.GetElementData().Parameters
            .Select(x => new HeatLoss.Infrastructure.Common.Models.Parameter(x.Name, x.Value))
            .ToList();
        
        return new LinearWallDto
        {
            Id = wall.Id.ToLong(),
            StartPoint = new Point3D(wall.StartPoint.X, wall.StartPoint.Y, wall.StartPoint.Z),
            EndPoint = new Point3D(wall.EndPoint.X, wall.EndPoint.Y, wall.EndPoint.Z),
            BasePoint = new Point3D(wall.BasePoint.X, wall.BasePoint.Y, wall.BasePoint.Z),
            Thickness = wall.Thickness,
            Height = wall.Height,
            Parameters = parameters,
            Position = GetPosition(),
            MaterialId =  parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.MaterialId)).Value ?? string.Empty
        };
        
        SurfacePosition GetPosition()
        {
            var location = parameters.FirstOrDefault(x => x.Name == _parameterResolver.GetParameterName(ParameterKey.WallLocation)).Value;
            switch (location)
            {
                case "Снаружи":
                    return SurfacePosition.Outside;
                case "Внутри":
                    return SurfacePosition.Inside;
                default:
                    throw new Exception("Неизвестный параметр LOCATION: " + location);
            }
        }
    }
    
    public OpeningDto ToOpeningDto(BuildingOpening opening)
    {
        var parameters = opening.GetElementData().Parameters
            .Select(x => new Parameter(x.Name, x.Value))
            .ToList();
        
        return new OpeningDto
        {
            Name = opening.Name,
            Width = opening.Width,
            Height = opening.Height,
            BasePoint = new Point3D(opening.BasePoint.X, opening.BasePoint.Y,opening.BasePoint.Z),
            Thickness = opening.Thickness,
            XDir = new Vector3D(opening.XDir.X, opening.XDir.Y, opening.XDir.Z),
            OpeningSide = opening.OpeningSide == BuildingOpening.OpeningSideType.Inside ? OpeningSideType.Inside : OpeningSideType.Outside,
            Parameters = parameters,
            Type = Enum.Parse<OpeningType>(opening.AECType.ToString())
        };
    }
    
    public CoordinateGridDto ToCoordinateGridDto(CoordinateGridRef grid)
    {
        return new CoordinateGridDto
        {
            Levels = grid.AxisZ.Points.Select(x => new GridLevel(x.Label, x.Position)).ToList(),
        };
    }
    
    public SlabDto ToSlabDto(BuildingSlab slab)
    {
        var parameters = slab.GetElementData().Parameters
            .Select(x => new Common.Models.Parameter(x.Name, x.Value))
            .ToList();
        var basePoint = new Point3D(slab.BasePoint.X, slab.BasePoint.Y, slab.BasePoint.Z);
        
        return new SlabDto
        {
            BasePoint = basePoint,
            Parameters = parameters,
            Coordinates = slab.GetContour()
                .ConvertTo(false)
                .ToVertex2ds()
                .Select(x => new Point3D(x.Position.X, x.Position.Y, basePoint.Z).Round())
                .ToList()
        };
    }

    public ProjectDataDto ToProjectDataDto(ParametricEntity projectData)
    {
        return new ProjectDataDto
        {
            OutsideTemperature = double.Parse(projectData.GetParameter(_parameterResolver.GetParameterName(ParameterKey.OutsideTemperature)), NumberStyles.Any, CultureInfo.InvariantCulture),
            FirstFloorAreaThermalConductivity = double.Parse(projectData.GetParameter(_parameterResolver.GetParameterName(ParameterKey.FirstFloorAreaConductivity)), NumberStyles.Any, CultureInfo.InvariantCulture),
            SecondFloorAreaThermalConductivity = double.Parse(projectData.GetParameter(_parameterResolver.GetParameterName(ParameterKey.SecondFloorAreaConductivity)), NumberStyles.Any, CultureInfo.InvariantCulture),
            ThirdFloorAreaThermalConductivity = double.Parse(projectData.GetParameter(_parameterResolver.GetParameterName(ParameterKey.ThirdFloorAreaConductivity)), NumberStyles.Any, CultureInfo.InvariantCulture),
            FourthFloorAreaThermalConductivity = double.Parse(projectData.GetParameter(_parameterResolver.GetParameterName(ParameterKey.FourthFloorAreaConductivity)), NumberStyles.Any, CultureInfo.InvariantCulture),
        };
    }
}