#include <stdio.h>

/**
 * is_prime_number_helper - helper function to check if a number is prime
 * @n: the number to check
 * @i: the current divisor to check divisibility
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
		return (0);	/* Numbers less than or equal to 1 are not prime */

	if (i * i > n)
		return (1);	/* n is prime if no divisor was found */

	if (n % i == 0)
		return (0);	/* n is divisible by i, so it's not prime */

	return (is_prime_number_helper(n, i + 1));	/* Recurse with next divisor */
}

/**
 * is_prime_number - returns 1 if the number is prime, 0 otherwise
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));	/* Start checking from divisor 2 */
}
