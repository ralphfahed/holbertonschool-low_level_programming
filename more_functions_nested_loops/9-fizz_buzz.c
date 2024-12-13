#include <stdio.h>
#include "main.h"

/**
 * main - Prints numbers from 1 to 100 with the following rules:
 *        - Print "Fizz" for multiples of 3.
 *        - Print "Buzz" for multiples of 5.
 *        - Print "FizzBuzz" for multiples of both 3 and 5.
 *        - Otherwise, print the number.
 * Each output is separated by a space.
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}

