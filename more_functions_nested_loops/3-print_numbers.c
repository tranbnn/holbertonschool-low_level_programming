#include "main.h"
/**
 * Description: print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
