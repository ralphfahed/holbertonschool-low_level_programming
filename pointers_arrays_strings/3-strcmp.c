#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: The first string.
 * @s2: The second string.
 * Return:
 *   0 if the strings are equal.
 *   A negative value if s1 is less than s2.
 *   A positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
return (s1[i] - s2[i]);
}
return (s1[i] - s2[i]);
}
