#include <stdio.h>

/**
 * main - Entry point
 *
 * a to z
 * a for loop to count a to z bkzin C progrme letter are numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');

if (num != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
