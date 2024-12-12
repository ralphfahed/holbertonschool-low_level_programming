#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase, each followed by a new line.
 *
 * Description: This function prints the alphabet from 'a' to 'z' in lowercase,
 * 10 times. Each time, the alphabet is printed on a new line.
 */
void print_alphabet_x10(void) /* print alphabet 10 times */
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
