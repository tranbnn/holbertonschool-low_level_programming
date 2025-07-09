#include "main.h"
/**
 * Description: print_chessboard - prints the chessboard
 * @a: input character
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j = j + 1;
		}
		i = i + 1;
		j = 0;
		_putchar('\n');
	}
}
