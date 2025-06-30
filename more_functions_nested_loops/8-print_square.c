#include "main.h"
/**
 * Description: print_square - prints a square
 * @size: is the size of the square
 */
void print_square(int size)
{
	int sq;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sq = 1; sq <= size; ++sq)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
