namespace HeatLoss.Infrastructure.NanoCad.Exceptions;

public class ValidationException : Exception
{
    public ValidationException(string message)
        : base(message) { }
}