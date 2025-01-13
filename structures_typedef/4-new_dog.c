#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog or NULL if failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len, i;

	if (!name || !owner)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->name[name_len] = '\0';

	for (i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[owner_len] = '\0';

	new_dog->age = age;

	return (new_dog);
}

