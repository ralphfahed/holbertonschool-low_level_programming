#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y, or -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)  /* Return -1 for negative exponents */
		return (-1);
	if (y == 0)  /* Base case: x^0 = 1 */
		return (1);
	return (x * _pow_recursion(x, y - 1));  /* Recursive call */
}

