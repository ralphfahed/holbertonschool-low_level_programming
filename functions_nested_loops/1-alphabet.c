#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase 10 times,
 *                  followed by a newline.
 */
void print_alphabet(void)
{
    char buffer[270]; /* 26 letters + newline * 10 = 270 characters */
    int i;            /* Loop counter for 10 iterations */
    int j;            /* Loop counter for alphabet characters */
    int index = 0;    /* Index for the buffer */

    /* Build the output in a buffer */
    for (i = 0; i < 10; i++) {
        for (j = 'a'; j <= 'z'; j++) {
            buffer[index++] = j;
        }
        buffer[index++] = '\n';
    }

    /* Use _putchar to print the buffer */
    for (i = 0; i < index; i++) {
        _putchar(buffer[i]);
    }
}

