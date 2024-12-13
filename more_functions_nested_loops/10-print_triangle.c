#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * If size is 0 or less, the function prints only a new line
 */
void print_triangle(int size)
{
int row, space;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
for (space = 0; space < size - row; space++)
_putchar(' ');
for (space = 0; space < row; space++)
_putchar('#');
_putchar('\n');
}
}

