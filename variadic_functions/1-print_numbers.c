#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n); /* Initialize va_list with n as the last fixed parameter */

	for (i = 0; i < n; i++)
	{
		/* Print the number */
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args); /* Clean up va_list */

	/* Print a new line at the end */
	printf("\n");
}

