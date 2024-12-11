#include <unistd.h>

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
    print_alphabet();
    return (0);
}
