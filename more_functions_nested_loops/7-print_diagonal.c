#include "main.h"
/**
 * Description: print_diagonal - draws a diagonal line on in the terminal
 * @n: the number of times \ is to be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, d;

		for  (l = 0; l < n; l++)
		{
			for (d = 0; d < n; d++)
			{
				if (d == l)
				{
					_putchar('\\');
				}
				else if (d < l)
				{
					_putchar(' ');
				}
			}
		}
	}
}
