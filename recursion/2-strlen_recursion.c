#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a str using recursion.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Base case: if the string is empty */
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

