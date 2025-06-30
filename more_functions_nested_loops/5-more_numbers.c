#include "main.h"
/**
 * Description: more_numbers - prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int times, n;

	for (times = 1; times <= 10; times++)
	{
		for (n = 0; n <= 14; ++times)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
