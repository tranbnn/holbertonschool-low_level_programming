#include "main.h"
#include "stdio.h"
/**
 * Description: print_triangle - prints a triangle
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int y, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 1; x <= size; x++)
			{
				if ((y + x) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar ('#');
				}
			}
			_putchar('\n');
		}
	}
}
