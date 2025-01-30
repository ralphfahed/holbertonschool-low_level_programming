#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to search for the bit in
 * @index: the index of the bit to retrieve, starting from 0
 *
 * Return: the value of the bit at index `index` or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8) /* Check if index is out of range */
	{
		return (-1);
	}

	return ((n >> index) & 1); /* Shift right and isolate the bit */
}
