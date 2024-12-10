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
char letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
