#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase 10 times,
 * followed by a new line.
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    char buffer[270]; // 26 letters + newline * 10 = 270 characters
    int index = 0;

    // Create a buffer containing the alphabet 10 times
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 27; j++) // 26 letters + newline
        {
            buffer[index++] = alphabet[j];
        }
    }

    // Print the buffer using _putchar
    for (int k = 0; k < index; k++)
    {
        _putchar(buffer[k]);
    }
}
