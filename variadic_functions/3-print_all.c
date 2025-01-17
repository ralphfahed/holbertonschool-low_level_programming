#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char c;
    int d;
    float f;
    char *s;

    va_start(args, format);

    while (format && format[i])
    {
        if (i > 0)
            printf(", ");

        switch (format[i])
        {
        case 'c':
            c = va_arg(args, int); /* 'char' is promoted to 'int' when passed through 'va_arg' */
            printf("%c", c);
            break;
        case 'i':
            d = va_arg(args, int);
            printf("%d", d);
            break;
        case 'f':
            f = va_arg(args, double); /* 'float' is promoted to 'double' */
            printf("%f", f);
            break;
        case 's':
            s = va_arg(args, char *);
            if (s)
                printf("%s", s);
            else
                printf("(nil)");
            break;
        default:
            break;
        }
        i++;
    }

    va_end(args);

    printf("\n");
}

