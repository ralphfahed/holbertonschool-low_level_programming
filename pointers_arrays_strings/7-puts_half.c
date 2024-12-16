#include "main.h"
#include <unistd.h>

/**
 * puts_half - Prints the second half of a string,
 *             followed by a newline.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int length = 0, start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Determine the starting point of the second half */
	start = (length + 1) / 2;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		write(1, &str[start], 1);
		start++;
	}

	/* Add a newline */
	write(1, "\n", 1);
}
