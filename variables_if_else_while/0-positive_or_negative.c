#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and determines
 * if it is positive, zero, or negative. It then prints the number
 * along with its classification.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* Print the number and its classification */
/*print the value of n */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
