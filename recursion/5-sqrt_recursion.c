#include <stdio.h>

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1;  /* Square root of negative numbers doesn't exist */
    }

    /* Base case: when the number is 0 or 1 */
    if (n == 0 || n == 1) {
        return n;  /* Square root of 0 is 0, and of 1 is 1 */
    }

    /* Recursively check for the square root */
    int guess = 0;
    while (guess * guess < n) {
        guess++;
    }

    if (guess * guess == n) {
        return guess;
    } else {
        return -1;  /* No natural square root */
    }
}
