#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* Check if the number is positive, zero, or negative */
if (n > 0) {
printf("The number is positive.\n");
} else if (n == 0) {
printf("The number is zero.\n");
} else {
printf("The number is negative.\n");
}
return 0;
}
