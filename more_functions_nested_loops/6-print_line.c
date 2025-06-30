#include "main.h"
/**
 * Descritpion: print_line - draws a straight line in the terminal
 * @n: is the number of times _ is to be printed
 */
void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
