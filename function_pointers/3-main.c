#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs the requested arithmetic operation
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 if successful, or 98/99/100 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4) /* Check for the correct number of arguments */
	{
		printf("Error\n");
		return (98);
	}

	/* Check if the operator is a single character */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]); /* Convert first argument to integer */
	num2 = atoi(argv[3]); /* Convert second argument to integer */

	operation = get_op_func(argv[2]); /* Get the function for the operator */

	if (operation == NULL) /* Check if operator is valid */
	{
		printf("Error\n");
		return (99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}

