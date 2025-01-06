#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: if the string ends */
	{
		putchar('\n'); /* Print a newline and stop recursion */
		return;
	}

	putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursive call with the next character */
}

