#include <stdio.h>
#include <string.h>

/**
 * _strncpy - function that copies a string from one location to another
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The number of characters to append from @src.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
