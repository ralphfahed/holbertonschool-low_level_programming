#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for a dog.
 * @d: pointer to the dog struct to be freed.
 *
 * Description: This function frees the memory allocated for the name,
 * owner, and the dog struct itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

