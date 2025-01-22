#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing the format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    int i, count = 0; /* i for iteration, count for characters printed */
    va_list args;     /* List to store the arguments */

    if (!format) /* Handle null format string */
        return (-1);

    va_start(args, format); /* Initialize the argument list */

    for (i = 0; format[i] != '\0'; i++) /* Loop through format string */
    {
        if (format[i] == '%') /* Handle format specifiers */
        {
            i++; /* Move to the next character */
            if (format[i] == 'c') /* Handle %c: Print a single character */
            {
                char c = va_arg(args, int);
                count += write(1, &c, 1);
            }
            else if (format[i] == 's') /* Handle %s: Print a string */
            {
                char *s = va_arg(args, char *);
                if (!s)
                    s = "(null)"; /* Handle null strings */
                while (*s)
                    count += write(1, s++, 1);
            }
            else if (format[i] == '%') /* Handle %%: Print a % sign */
            {
                count += write(1, "%", 1);
            }
            else /* Handle unknown specifiers */
            {
                count += write(1, "%", 1);
                count += write(1, &format[i], 1);
            }
        }
        else /* Handle regular characters */
        {
            count += write(1, &format[i], 1);
        }
    }

    va_end(args); /* Clean up the argument list */
    return (count);
}

