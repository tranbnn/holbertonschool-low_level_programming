#include "main.h"
/**
 * Description: more_numbers - prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int n;
	int times;

	for (times = 0; times <= 10; times++)
	{
		for(n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar(times);
	}
	_putchar('\n');
}
