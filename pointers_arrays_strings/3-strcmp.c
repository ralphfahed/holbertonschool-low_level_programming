#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: The first string.
 * @s2: The second string.
 *   0 if the strings are equal.
 *   -1 if s1 is less than s2.
 *   1 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-15); /* s1 is less than s2 */
		else if (s1[i] > s2[i])
			return (15);  /* s1 is greater than s2 */
	}

	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);  /* Strings are equal */
	else if (s1[i] == '\0')
		return (-15); /* s1 is shorter than s2 */
	else
		return (15);  /* s1 is longer than s2 */
}

