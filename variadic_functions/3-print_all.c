#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format provided
 * @format: The list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i] != '\0')  /* Loop through the format string */
	{
		if (i != 0)
			printf(", ");  /* Print a separator between arguments */

		if (format[i] == 'c')  /* Handle char */
		{
			char c = va_arg(args, int);  /* char is promoted to int in va_arg */
		printf("%c", c);
		}
		else if (format[i] == 'i')  /* Handle int */
		{
			int num = va_arg(args, int);
		printf("%d", num);
		}
		else if (format[i] == 'f')  /* Handle float */
		{
			float f = va_arg(args, double);  /* float is promoted to double in va_arg */
		printf("%f", f);
		}
		else if (format[i] == 's')  /* Handle string */
		{
			str = va_arg(args, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}

		i++;  /* Move to the next character in the format string */
	}

	printf("\n");  /* Print a new line at the end */
	va_end(args);  /* Clean up va_list */
}

