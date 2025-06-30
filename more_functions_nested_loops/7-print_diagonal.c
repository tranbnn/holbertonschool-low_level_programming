#include "main.h"
/**
 * Description: print_diagonal - draws a diagonal line on in the terminal
 * @n: the number of times \ is to be printed
 */
void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; ++m)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}

