#include "main.h"
/**
 * Description: print_diagonal - draws a diagonal line on in the terminal
 * @n: the number of times \ is to be printed
 */
void print_diagonal(int n)
{
	int spot, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (spot = 1; spot <= n; ++spot)
		{
			for (space = 1; space <= spot; ++space)
			{
				if (space == spot)
				{	_putchar('\\');
				}
				else if (space < spot)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
