#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n, or -1 if n is lower than 0.
 */
int factorial(int n)
{
	if (n < 0) /* Error case: factorial is not defined for negative numbers */
		return (-1);
	if (n == 0) /* Base case: factorial of 0 is 1 */
		return (1);
	return (n * factorial(n - 1)); /* Recursive case: n * factorial of n-1 */
}

