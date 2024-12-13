#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: Starting number
 *
 * Description: This function prints all numbers from n to 98,
 * regardless of whether n is greater than or less than 98.
 * Numbers are separated by commas and spaces.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		print_number(n);
	}
	else
	{
		for (; n >= 98; n--)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

