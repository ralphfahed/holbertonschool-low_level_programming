#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *s;
    int first = 1;

    va_start(args, format);

    while (format && format[i])
    {
        if (!first)
            printf(", ");
        first = 0;

        if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
        {
            if (format[i] == 'c')
                printf("%c", va_arg(args, int));
            if (format[i] == 'i')
                printf("%d", va_arg(args, int));
            if (format[i] == 'f')
                printf("%f", va_arg(args, double));
            if (format[i] == 's')
            {
                s = va_arg(args, char *);
                printf("%s", s ? s : "(nil)");
            }
        }

        i++;
    }

    va_end(args);
    printf("\n");
}

