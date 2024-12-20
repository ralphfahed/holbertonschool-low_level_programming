#include <stdio.h>
/**
 * print_chessboard - Prints a chessboard.
 * @a: Pointer to a 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Loop through each row */
	for (i = 0; i < 8; i++)
	{
		/* Loop through each column in the current row */
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}

