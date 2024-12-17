#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenate 2 strings with limit of num of char to append
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The number of characters to append from @src.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (temp);
}

