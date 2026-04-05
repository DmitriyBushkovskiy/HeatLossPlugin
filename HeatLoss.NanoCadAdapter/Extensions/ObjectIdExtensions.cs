using Teigha.DatabaseServices;

namespace HeatLoss.NanoCadAdapter.Extensions;

public static class ObjectIdExtensions
{
    public static long ToLong(this ObjectId objectId)
    {
        return long.Parse(objectId.ToString());
    }
}