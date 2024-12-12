#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz"; /* Define the alphabet string */
    int i;  /* Declare 'i' before the loop */

    /* Loop through the string and print each character */
    for (i = 0; alphabet[i] != '\0'; i++)
    {
        _putchar(alphabet[i]);  /* Print each character */
    }

    _putchar('\n');  /* Print a newline character */
}

