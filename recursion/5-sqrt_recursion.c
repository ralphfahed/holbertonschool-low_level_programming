#include <stdio.h>

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1;  // Square root of negative numbers doesn't exist
    }

    // Helper function to compute the square root recursively
    return _sqrt_recursion_helper(n, 0);
}

int _sqrt_recursion_helper(int n, int guess) {
    if (guess * guess == n) {
        return guess;  // Found the square root
    }
    if (guess * guess > n) {
        return -1;  // No natural square root
    }
    return _sqrt_recursion_helper(n, guess + 1);  // Recurse with the next guess
}
