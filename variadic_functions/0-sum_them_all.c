#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments to sum.
 * Return: the sum of all the arguments, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;		/* Step 1: Declare va_list */
	int total = 0;		/* Variable to store the sum */
	unsigned int i;		/* Loop counter */

	if (n == 0)		/* Step 2: Handle edge case where n == 0 */
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);		/* Step 5: Clean up va_list */

	return (total);		/* Return the total sum */
}
