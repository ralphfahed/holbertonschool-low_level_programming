#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* For NULL */

/**
 * print_name - Calls a function to perform an operation on a string
 * @name: The string (name) to be processed
 * @f: A pointer to a function that takes a char pointer as an argument
 */
void print_name(char *name, void (*f)(char *));

#endif /* MAIN_H */

