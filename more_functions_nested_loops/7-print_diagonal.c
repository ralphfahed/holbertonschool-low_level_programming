#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the '\' character should be printed
 *
 * Description: This function prints a diagonal line using the '\'
 * character. Each line starts with spaces to align the '\' diagonally.
 * If n is 0 or less, it only prints a newline.
 */
void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 1; j <= i; j++)
i{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
