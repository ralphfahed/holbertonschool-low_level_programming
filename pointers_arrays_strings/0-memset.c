#include "main.h"

/**
 * _memset - Fills the first n bytes of memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to set to the value of `b`.
 *
 * Description: This function fills the first n bytes of the memory area
 *              pointed to by `s` with the constant byte `b`.
 *
 * Return: A pointer to the memory area `s`.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i; /* Loop counter */
/* Fill the memory block with the constant byte */
for (i = 0; i < n; i++)
{
s[i] = b; /* Set each byte to `b` */
}
return (s); /* Return the pointer to the memory area */
}
