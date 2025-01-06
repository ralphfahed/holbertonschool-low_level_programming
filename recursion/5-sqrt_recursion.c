#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current number being tested as the square root.
 *
 * Return: The natural square root, or -1 if it doesn't exist.
 */
int _sqrt_helper(int n, int i) {
    if (i * i > n)
        return -1; /* No natural square root */
    if (i * i == n)
        return i; /* Found the square root */
    return _sqrt_helper(n, i + 1); /* Test the next number */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n) {
    if (n < 0)
        return -1; /* Negative numbers don't have natural square roots */
    return _sqrt_helper(n, 0); /* Start testing from 0 */
}

