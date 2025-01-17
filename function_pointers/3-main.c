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

	/* Check for the correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	/* Check if the operator is a single character */
	if (argv[2][1] != '\0' || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	/* Convert arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Check for division by zero */
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	/* Perform the operation and print the result */
	operation = get_op_func(argv[2]);
	printf("%d\n", operation(num1, num2));

	return (0);
}
