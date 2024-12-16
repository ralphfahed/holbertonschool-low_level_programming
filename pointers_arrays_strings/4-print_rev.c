#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
int length;
int rev;
for (length = 0; s[length] != '\0'; length++)
;
for (rev = length - 1; rev >= 0; rev--)
{
putchar(s[rev]);
}
putchar('\n');
}
