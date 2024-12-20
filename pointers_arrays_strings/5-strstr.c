#include <stdio.h>

/**
 * _strstr - Locates the first occurrence of the substring needle in string
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Check if needle is an empty string */
	if (*needle == '\0')
		return (haystack);

	/* Loop through each character in haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Check if the substring starts at haystack[i] */
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break; /* If characters do not match, break out of inner loop */
		}

		/* If the full needle is found, return pointer to its first occurrence */
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	/* If no match is found, return NULL */
	return (NULL);
}

