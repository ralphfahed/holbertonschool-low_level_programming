#include "main.h"

/**
 * _memcpy - Copies memory from one location to another.
 * @dest: Pointer to the destination memory block.
 * @src: Pointer to the source memory block.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory block.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

