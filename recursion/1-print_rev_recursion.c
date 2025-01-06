#include <stdio.h>
#include <unistd.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to print in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
		return;

	_print_rev_recursion(s + 1); /* Recursive call with the next character */
	write(1, s, 1); /* Print the current character after recursion */
}

