#include "stdio.h"
#include "main.h"
/**
 * Description: print_to_98 - prints numbers up to 98
 * @n: int to look for
 * Return: n
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while ( n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
