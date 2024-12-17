#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000

/**
 * reverse_array - Reverses the contents of an integer array.
 * @a: A pointer to the array of integers.
 * @n: The number of elements in the array to reverse.
 *
 * Description: This function takes an array of integers and its size as input.
 * It reverses the elements of the array in-place.
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
int temp[MAX_SIZE];
int i;
for (i = 0; i < n; i++)
{
temp[i] = a[n - 1 - i];
}
for (i = 0; i < n; i++)
{
a[i] = temp[i];
}
}
