#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in
 *         the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* This will store the final number */
	int i;

	/* Step 1: Check if the string is NULL */
	if (b == NULL)
	{
		return (0);
	}

	/* Step 2: Iterate through each character in the string */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Step 3: Check if the character is valid (either '0' or '1') */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0); /* Invalid character found, return 0 */
		}

		/* Step 4: Shift the result left by 1 and add the current binary digit */
		result = result * 2 + (b[i] - '0');
	}

	/* Step 5: Return the final result */
	return (result);
}

