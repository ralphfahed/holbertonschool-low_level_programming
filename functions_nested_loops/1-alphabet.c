#include <unistd.h>


void print_alphabet(void)
{
    char alpha = 'a';
    while (alpha <= 'z')
    {
        _putchar(alpha);
        alpha++;
    }
    _putchar('\n');
}
