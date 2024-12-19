#include "main.h"
#include <stddef.h> /* For NULL */

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /* Traverse the string */
	{
		if (*s == c) /* Check for the character */
		{
			return (s); /* Return pointer to the match */
		}
		s++;
	}
	return (NULL); /* Return NULL if no match is found */
}

