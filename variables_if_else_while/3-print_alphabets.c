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
char LETTER;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
putchar(letter);
}
for (LETTER = 'A' ; LETTER <= 'Z' ; LETTER++)
{
putchar(LETTER);
}
putchar('\n');
return (0);
}
