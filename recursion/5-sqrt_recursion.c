#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Function to find the natural square root of n
 * @n: The number to find the square root of
 * Return: The natural square root of n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	/**
	 * find_sqrt - Helper function to recursively find the square root
	 * @n: The number to find the square root of
	 * @guess: The current guess for the square root
	 * Return: The natural square root of n or -1 if it doesn't exist
	 */
	int find_sqrt(int n, int guess)
	{
		if (n < 0)
			return (-1);
		if (guess * guess == n)
			return (guess);
		if (guess * guess > n)
			return (-1);
		return (find_sqrt(n, guess + 1));
	}

	return (find_sqrt(n, 1));
}

