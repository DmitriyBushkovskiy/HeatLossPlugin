namespace HeatLoss.BimAdapters.DTO;

public class CeilingDto
{
    public double Area { get; set; }
    public SpaceDto Space { get; set; }

    public CeilingDto(SpaceDto spaceDto, double area)
    {
        Area = area;
        Space = spaceDto;
    }
}