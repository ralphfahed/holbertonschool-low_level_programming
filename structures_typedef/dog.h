#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct to store information about a dog
 * @name: The name of the dog
 * @age: The age of the dog (in years)
 * @owner: The name of the dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
