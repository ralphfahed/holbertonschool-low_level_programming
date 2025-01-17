#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format
 * @format: A list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: string (if NULL, print (nil))
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *sep = "";
    char *str;

    va_start(args, format);

    while (format && format[i]) /* First while loop */
    {
        /* First if: Check valid type and handle printing */
        if (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's')
        {
            printf("%s", sep);
            sep = ", ";

            /* Second if: Handle printing each type using switch */
            switch (format[i])
            {
                case 'c':
                    printf("%c", va_arg(args, int));
                    break;
                case 'i':
                    printf("%d", va_arg(args, int));
                    break;
                case 'f':
                    printf("%f", va_arg(args, double));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    printf("%s", str ? str : "(nil)");
                    break;
            }
        }
        i++;
    }

    va_end(args);
    printf("\n");
}

