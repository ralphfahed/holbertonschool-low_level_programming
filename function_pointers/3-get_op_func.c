#include "3-calc.h"
#include <stddef.h> /* For NULL */

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as argument
 *
 * Return: Pointer to the function that corresponds to the operator,
 *         or NULL if no match is found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s) /* Only this one `if` statement */
			return (ops[i].f);  /* Return the corresponding function pointer */
		i++;
	}
	return (NULL); /* Return NULL if no match is found */
}

