#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 * @d: A pointer to the struct dog to print.
 *
 * If an element of d is NULL, print (nil) instead of the element.
 * If d is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;  /* Do nothing if the struct pointer is NULL */
	}

	/* Print name (or (nil) if name is NULL) */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	/* Print age (float is not NULL, just print it directly) */
	printf("Age: %.6f\n", d->age);

	/* Print owner (or (nil) if owner is NULL) */
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

