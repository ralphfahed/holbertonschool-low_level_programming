#include <unistd.h>

/* _putchar function to print a character */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/* print_alphabet function to print lowercase alphabet */
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

/* Main function */
int main(void)
{
    print_alphabet(); // Call the function to print alphabet
    return 0;
}

