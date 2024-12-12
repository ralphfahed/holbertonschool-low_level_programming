#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * more_numbers - print numbers from 0 to 9
 *
 * 
 * return : return the numbers
 */

void more_numbers(void) /* print 0 to 14 10times */
{
char i;
char j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('0' + (j / 10));
}
_putchar('0' + (j % 10));
}
_putchar('\n');
}
}
