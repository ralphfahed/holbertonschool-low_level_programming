#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
int n;
/* check the if statement */

    printf("The number ");
    scanf("%d", &n);

if (n>0 ){
	printf("is positive\n");
}else if (n == 0 ){
	printf ("is zero\n");
}else{
	printf("is negative\n");
}
return (0); 
}
