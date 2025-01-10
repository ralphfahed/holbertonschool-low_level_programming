#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	/* Check if nmemb or size is zero */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory */
	array = (char *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	/* Initialize memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}

