#include <unistd.h>

/* Function prototype for _putchar */
int _putchar(char c);

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
 
