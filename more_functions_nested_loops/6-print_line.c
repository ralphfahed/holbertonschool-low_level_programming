#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Description: This function prints a straight line using the '_'
 * character. If n is 0 or less, it only prints a newline.
 */

void print_line(int n) /* print line */
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
