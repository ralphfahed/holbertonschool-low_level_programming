#include <stdio.h>

/**
 * _sqrt_recursion_helper - helper function to find the natural square root
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the natural square root if found, otherwise -1
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);	/* Found the square root */

	if (guess * guess > n)
		return (-1);	/* No natural square root */

	return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);	/* Square root of negative numbers doesn't exist */

	return (_sqrt_recursion_helper(n, 0));	/* Start recursion with guess = 0 */
}
