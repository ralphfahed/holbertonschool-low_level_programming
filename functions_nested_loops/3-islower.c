#include <stdio.h>

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char c;
   
    c = 'a';
    printf("_islower('%c') = %d\n", c, _islower(c));  // Should return 1
    
    c = 'A';
    printf("_islower('%c') = %d\n", c, _islower(c));  // Should return 0
    
    return 0;
}

