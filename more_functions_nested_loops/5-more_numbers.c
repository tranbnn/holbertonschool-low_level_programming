#include "main.h"
/**
 * Description: more_numbers - prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int times;

	for (times = 1; times <= 10; times++)
	{
		printf("01234567891011121314");
		{
			if (times >=10)
			{
				_putchar(times / 10 + '0');
			}
			_putchar(times %  10 + '0');
		}
		_putchar('\n');
	}
}
