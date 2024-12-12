#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase 10 times,
 * followed by a new line.
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    char buffer[270];
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            buffer[index++] = alphabet[j];
        }
    }

    for (int k = 0; k < index; k++)
    {
        _putchar(buffer[k]);
    }
}
