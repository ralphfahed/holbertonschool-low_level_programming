#include <stdio.h>

/**
 * _strpbrk - Locates the first occurrence in the string s of any of the byts
 * @s: The string to search in.
 * @accept: The string containing characters to match.
 *
 * Return: A pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* Loop through each character in string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through each character in string accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* If matches any character, return the pointer to it */
			if (s[i] == accept[j])
			{
				return (&s[i]);  /* Return pointer to the matched character */
			}
		}
	}

	/* If no match found, return NULL */
	return (NULL);
}
