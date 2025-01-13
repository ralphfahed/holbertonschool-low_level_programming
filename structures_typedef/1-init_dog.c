#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to a struct dog.
 * @name: A string representing the dog's name.
 * @age: The dog's age.
 * @owner: A string representing the dog's owner.
 *
 * This function initializes the fields of the struct dog with the
 * provided values. If the pointer to the struct is NULL, the function
 * will return without making any changes.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;  /* Return if d is NULL */
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

