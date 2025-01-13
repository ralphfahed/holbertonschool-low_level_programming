#include <stddef.h> /* For size_t */

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * Description: This function takes an array, its size, and a function pointer
 * as arguments. It applies the function pointed to by `action` on each element
 * of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Loop through the array */
	for (i = 0; i < size; i++)
	{
		action(array[i]); /* Call action function on array[i] */
	}
}

