#include <stdio.h>
#include "main.h"  

/* to check if c is lower or upper case */

int main() {
    char c;

    c = 'a';
    printf("_islower('%c') = %d\n", c, _islower(c));  // Should return 1

    c = 'A';
    printf("_islower('%c') = %d\n", c, _islower(c));  // Should return 0

    return (0);
}
