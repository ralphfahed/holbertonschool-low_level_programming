#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n) {
    int _sqrt(int num, int guess) {
        if (guess * guess > num)
            return -1; // No natural square root
        if (guess * guess == num)
            return guess; // Found the square root
        return _sqrt(num, guess + 1); // Test the next number
    }

    if (n < 0)
        return -1; // Negative numbers don't have natural square roots
    return _sqrt(n, 0); // Start testing from 0
}

