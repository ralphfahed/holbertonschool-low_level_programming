#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * more_numbers - print numbers from 0 to 9
 *
 * return : return the numbers
 */

void print_diagonal(int n){
	int i;
	int j;

	if(n<=0){
		_putchar('\n');
	}
	else
	{
	       	for (i=0;i<n;i++)
		{
			for (j=0;j<=i;j++){
				_putchar(' ');
		}
			_putchar('\\');
                        _putchar('\n');
		}
	}

}
