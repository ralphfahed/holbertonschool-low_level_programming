#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
char i;
char j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
