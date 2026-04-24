using System.ComponentModel.DataAnnotations;
using System.Drawing;
using HeatLoss.Application.Models;
using HeatLoss.Domain.Enums;
using HeatLoss.Geometry;
using HeatLoss.Infrastructure.Common;
using HeatLoss.Infrastructure.Common.DTO;
using HeatLoss.Infrastructure.Common.Models;
using NetTopologySuite.Geometries;

namespace HeatLoss.Application;

public class Validator
{
    private readonly IBimProvider _bimProvider;
    private readonly HeatLossGeometry _geometry;
    private readonly Mapper _mapper;

    public Validator(IBimProvider bimProvider)
    {
        _bimProvider = bimProvider;
        _geometry = new HeatLossGeometry();
        _mapper = new Mapper(bimProvider.ParameterResolver);
    }

    public void ValidateSpaces(IEnumerable<SpaceModel> spaces)
    {
        var errorLines = new List<Line3D>();
        var isCorrect = true;
        foreach (var space in spaces)
        {
            var edgesWithoutWall = space.Edges.Where(e => e.ModelWall == null).ToList();
            if (edgesWithoutWall.Any())
            {
                if (isCorrect)
                {
                    _bimProvider.WriteMessage("Найдены помещения, у которых границы не соприкасаются со стеной:");
                    isCorrect = false;
                }
                _bimProvider.WriteMessage($"Пом. {space.Number} {space.Name}. Границ помещения без стен: {edgesWithoutWall.Count}");
                foreach (var edge in edgesWithoutWall)
                {
                    errorLines.Add(
                        new Line3D(
                            new Point3D(edge.Start.X, edge.Start.Y, space.BottomLevel),
                            new Point3D(edge.End.X, edge.End.Y, space.BottomLevel)
                        ));
                }
            }
        }
        if(errorLines.Any())
            _bimProvider.PrintGeometry(errorLines, Constants.ValidationLayerName, null);
        
        if (!isCorrect)
        {
            throw new ValidationException("Стороны помещения, которые не контактируют со стенами выделены красным");
        }
    }

    public void ValidateWalls(List<CoordinateGridDto> grids,  List<SpaceModel> spaces)
    {
        var isCorrect = true;
        var levels = grids.Single().Levels.OrderBy(x => x.Position).ToList();
        for (int i = 0; i < levels.Count - 1; i++)
        {
            var floor = levels[i];
            var floorSpaces = spaces.Where(x => Math.Abs(x.BottomLevel - floor.Position) < 1 
                                                || (x.BottomLevel + x.Height > floor.Position && x.BottomLevel + x.Height <= levels[i+1].Position ))
                .ToList();
            
            if (floorSpaces.Count == 0)
                continue;
            var perimeter = _geometry.GetCommonPerimeters(floorSpaces.Select(x => x.GetPolygon()), 1000).Single();
            isCorrect = isCorrect && ValidateWallsTypesAndPositions(floorSpaces, perimeter, floor.Position);
        }
        if (!isCorrect)
            throw new ValidationException("Ошибка при проверке стен");
    }
    
    public void ValidateOpenings(List<OpeningModel> openings)
    {
        var invalidOpenings = new List<OpeningModel>();
        foreach (var opening in openings)
        {
            if (opening.ThermalConductivity <= 0)
            {
                invalidOpenings.Add(opening);
            }
        }
    
        if (invalidOpenings.Any())
        {
            _bimProvider.WriteMessage("Найдены проемы с некорректным коэффициентом теплопроводности. Проемы выделены красным");
            foreach (var group in invalidOpenings.GroupBy(x => x.BottomLevel))
            {
                _bimProvider.PrintGeometry(group.ToList().Select(x => _mapper.ToPolyline3D(x.Polygon, group.Key)).ToList(), Constants.ValidationLayerName, null);
            }
        }
    
        if (invalidOpenings.Any())
            throw new ValidationException("Ошибка при проверке проемов");
    }
    
    private bool ValidateWallsTypesAndPositions(List<SpaceModel> spaces, Polygon perimeter, double level)
    {
        var isCorrect = true;
        
        foreach (var space in spaces)
        {
            foreach (var edge in space.Edges)
            {
                if (!edge.Walls.Any())
                {
                    isCorrect = false;
                    // Для наружных стен здания стоит свойство, что они внутренние
                    var line = _mapper.ToLine(edge.LineString, double.IsNaN(edge.Start.Z) ? 0 : edge.Start.Z);
                    _bimProvider.PrintGeometry(new []{ line }, Constants.ValidationLayerName, null); //; Print(new []{line});
                }
                foreach (var wall in edge.Walls)
                {
                    // Для внутренних стен здания стоит свойство, что они наружные
                    if (wall.Position == SurfacePosition.Outside && perimeter.Contains(wall.Polygon))
                    {
                        isCorrect = false;
                        _bimProvider.PrintGeometry( new []{_mapper.ToPolyline3D(wall.Polygon, wall.BottomLevel)}, Constants.ValidationLayerName, null);
                    }
                }
            }
        }
    
        if (!isCorrect)
        {
            _bimProvider.PrintGeometry( new []{_mapper.ToPolyline3D(perimeter, level)}, Constants.ValidationLayerName,  Color.FromArgb(0, 0, 255));
            _bimProvider.WriteMessage("\nНайдены стены с неверными настройками расположения (внутрення/наружная)\nКрасным показаны стены или стороны помещения, синим - внешний периметр этажа");
        }
    
        return isCorrect;
    }
}