#include "main.h"
/**
 * Description: more_numbers - prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int times, n;

	for (times = 0; times <= 10; times++)
	{
		for (n = 0; n <= 14; times++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
