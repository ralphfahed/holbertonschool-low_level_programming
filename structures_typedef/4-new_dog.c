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

    /* Check if name or owner is NULL (invalid input). */
    if (name == NULL || owner == NULL)
        return (NULL);

    /* Allocate memory for the new dog structure. */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL); /* Return NULL if memory allocation fails. */

    /* Calculate the length of the name string. */
    for (name_len = 0; name[name_len]; name_len++)
        ;

    /* Calculate the length of the owner string. */
    for (owner_len = 0; owner[owner_len]; owner_len++)
        ;

    /* Allocate memory for the dog's name, including space for the null terminator. */
    new_dog->name = malloc(name_len + 1);
    if (new_dog->name == NULL)
    {
        /* If memory allocation for the name fails, free previously allocated memory. */
        free(new_dog);
        return (NULL);
    }

    /* Allocate memory for the dog's owner, including space for the null terminator. */
    new_dog->owner = malloc(owner_len + 1);
    if (new_dog->owner == NULL)
    {
        /* If memory allocation for the owner fails, free previously allocated memory for name and dog structure. */
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    /* Copy the name string to the newly allocated memory. */
    for (i = 0; i < name_len; i++)
        new_dog->name[i] = name[i];
    new_dog->name[name_len] = '\0'; /* Null-terminate the name string. */

    /* Copy the owner string to the newly allocated memory. */
    for (i = 0; i < owner_len; i++)
        new_dog->owner[i] = owner[i];
    new_dog->owner[owner_len] = '\0'; /* Null-terminate the owner string. */

    /* Set the age of the new dog. */
    new_dog->age = age;

    /* Return the pointer to the newly created dog structure. */
    return (new_dog);
}

