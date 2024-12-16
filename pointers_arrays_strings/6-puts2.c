#include "main.h"
#include <unistd.h>

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character,
 *         followed by a newline.
 * @str: The input string.
 */
void puts2(char *str)
{
	int length;
	int i;

	/* Calculate the length of the string */
	for (length = 0; str[length] != '\0'; length++)
		;

	/* Print every other character */
	for (i = 0; i < length; i += 2)
		write(1, &str[i], 1);

	/* Add a newline at the end */
	write(1, "\n", 1);
}
