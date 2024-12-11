#include <stdio.h>

void print_alphabet(void)
{
    char alpha = 'a';
    while (alpha <= 'z')
    {
        putchar(alpha);  // Print each character one by one
        alpha++;
    }
    putchar('\n');  // Print a newline at the end
}

int main(void)
{
    print_alphabet();  // Call the function to print the alphabet
    return 0;
}

