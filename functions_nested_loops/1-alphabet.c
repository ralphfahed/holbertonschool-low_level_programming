#include <stdio.h>

void print_alphabet(void);

int _putchar(char c)
{
    return putchar(c);
}

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

int main(void)
{
    print_alphabet();
    return 0;
}
