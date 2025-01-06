#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Function to find the natural square root of n
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 * Return: The natural square root of n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n, int guess)
{
	if (n < 0)
	{
		return (-1); /* Negative numbers don't have real square roots */
	}
	if (guess * guess == n)
	{
		return (guess); /* Found the square root */
	}
	if (guess * guess > n)
	{
		return (-1); /* No natural square root */
	}
	return (_sqrt_recursion(n, guess + 1)); /* Recursively check the next guess */
}

