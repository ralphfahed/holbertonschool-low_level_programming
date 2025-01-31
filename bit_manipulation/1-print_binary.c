#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Description: Uses recursion and bitwise operations to print
 * the binary representation of an unsigned long int.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* Recursively shift right */

	putchar((n & 1) ? '1' : '0'); /* Print the last bit */
}

