#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @s: The string to modify.
 *
 * Return: The pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;
	int first = 0; /* 1 indicates the start of a new word */

	while (s[i] != '\0')
	{
		/* Check if the current character is a letter */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (first == 0)
			{
				s[i] = s[i] - 32; /* Convert to uppercase */
			}
			first = 1; /* Reset flag since we're inside a word */
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			 s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			 s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			 s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			first = 0; /* Set flag for the next character to start a new word */
		}
		else
		{
			first = 1; /* For non-separator, reset the flag */
		}
		i++;
	}

	return (s);
}

