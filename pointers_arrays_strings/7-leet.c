#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet).
 * @s: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
int i = 0;
char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', 's', 'S'};
char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '5', '5'};

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 10)
		{
			if (s[i] == letter[j])
			{
				s[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}

