#include <stddef.h> /* For NULL */

/**
 * print_name - Calls a function to perform an operation on a string
 * @name: The string (name) to be processed
 * @f: A pointer to a function that takes a char pointer as an argument
 *
 * Description: This function takes a string and a pointer to another function.
 * It calls the provided function `f` with the string `name` as its argument,
 * provided neither `name` nor `f` is NULL.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name); /* Call the function `f` with `name` as argument */
}

