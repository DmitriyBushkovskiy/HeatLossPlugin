using ParametricKit;
using ParametricKit.Attributes;
using ParametricKit.Primitives;

namespace HeatLoss.Infrastructure.NanoCad.Objects;

public class ProjectDataObject : EntitySource<ProjectDataSpecification>
    {
        public ProjectDataView2D View2D { get; set; }
        public ProjectDataView3D View3D { get; set; }

        public ProjectDataObject(ProjectDataSpecification specification) : base(specification)
        {
            View2D = new(this);
            View3D = new(this);
        }
    }

    public sealed class ProjectDataSpecification : EntitySpecification
    {
        public ProjectDataSpecification() 
        {
            Name = "ProjectData";
            Temperature = 100;
            FloorAreaOneThermalConductivity = 2.1;
            FloorAreaTwoThermalConductivity = 4.3;
            FloorAreaThreeThermalConductivity = 8.6;
            FloorAreaFourThermalConductivity = 14.2;
        }

        [ParameterDefinition("HL_OUTSIDE_TEMPERATURE", "Температура наружного воздуха, °С")]
        public SpecificationParameter Temperature { get; set; }
        
        [ParameterDefinition("HL_FLOOR_AREA1_THERMAL_CONDUCTIVITY", "Сопротивление теплопередаче 1 зоны пола, м²∙°С/Вт")]
        public SpecificationParameter FloorAreaOneThermalConductivity { get; set; }
        
        [ParameterDefinition("HL_FLOOR_AREA2_THERMAL_CONDUCTIVITY", "Сопротивление теплопередаче 2 зоны пола, м²∙°С/Вт")]
        public SpecificationParameter FloorAreaTwoThermalConductivity { get; set; }
        
        [ParameterDefinition("HL_FLOOR_AREA3_THERMAL_CONDUCTIVITY", "Сопротивление теплопередаче 3 зоны пола, м²∙°С/Вт")]
        public SpecificationParameter FloorAreaThreeThermalConductivity { get; set; }
        
        [ParameterDefinition("HL_FLOOR_AREA4_THERMAL_CONDUCTIVITY", "Сопротивление теплопередаче 4 зоны пола, м²∙°С/Вт")]
        public SpecificationParameter FloorAreaFourThermalConductivity { get; set; }
    }

    public class ProjectDataView2D : EntityView2D<ProjectDataObject>
    {
        public ProjectDataView2D(ProjectDataObject entity) : base(entity)
        {
            Line1.DirectionX = 0;
            Line1.DirectionY = 1;
            Line1.Length = 5000;
            Line1.Color = 3;
            Line1.LineWeight = 100;
            
            Line2.BasePointY = 5000;
            Line2.DirectionX = -0.5;
            Line2.DirectionY = -1;
            Line2.Length = 1000;
            Line2.Color = 3;
            Line2.LineWeight = 100;
            
            Line3.BasePointY = 5000;
            Line3.DirectionX = 0.5;
            Line3.DirectionY = -1;
            Line3.Length = 1000;
            Line3.Color = 3;
            Line3.LineWeight = 100;

            Text.BasePointX = -500;
            Text.BasePointY = 6000;
            Text.BasePointZ = 0;
            Text.DirectionX = 1;
            Text.DirectionY = 0;
            Text.DirectionZ = 0;
            Text.LineWeight = 100;
            Text.Content = "N";
            Text.Color = 3;
            Text.Height = 1500;
            Text.IsAlwaysOnTop = true;
        }
        
        public Line Line1 { get; set; } = new();
        public Line Line2 { get; set; } = new();
        public Line Line3 { get; set; } = new();
        public Text Text { get; set; } = new();
    }

    public class ProjectDataView3D : EntityView3D<ProjectDataObject>
    {
        public ProjectDataView3D(ProjectDataObject entity) : base(entity)
        {
            Line1.DirectionX = 0;
            Line1.DirectionY = 1;
            Line1.Length = 5000;
            Line1.Color = 3;
            Line1.LineWeight = 100;
            
            Line2.BasePointY = 5000;
            Line2.DirectionX = -0.5;
            Line2.DirectionY = -1;
            Line2.Length = 1000;
            Line2.Color = 3;
            Line2.LineWeight = 100;
            
            Line3.BasePointY = 5000;
            Line3.DirectionX = 0.5;
            Line3.DirectionY = -1;
            Line3.Length = 1000;
            Line3.Color = 3;
            Line3.LineWeight = 100;

            Text.BasePointX = -500;
            Text.BasePointY = 6000;
            Text.BasePointZ = 0;
            Text.DirectionX = 1;
            Text.DirectionY = 0;
            Text.DirectionZ = 0;
            Text.LineWeight = 100;
            Text.Content = "N";
            Text.Color = 3;
            Text.Height = 1500;
            Text.IsAlwaysOnTop = true;
        }
    
        public Line Line1 { get; set; } = new();
        public Line Line2 { get; set; } = new();
        public Line Line3 { get; set; } = new();
        public Text Text { get; set; } = new();
    }