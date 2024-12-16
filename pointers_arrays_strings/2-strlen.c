#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
int length = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
length++;
}
return (length);
}
