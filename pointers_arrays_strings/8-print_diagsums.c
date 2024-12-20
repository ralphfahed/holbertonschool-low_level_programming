#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the matrix (it is a square matrix).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int primary_sum = 0, secondary_sum = 0;

	/* Loop through each row */
	for (i = 0; i < size; i++)
	{
		primary_sum += a[i * size + i]; /* Element in primary diagonal */
		secondary_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary_sum, secondary_sum);
}

