#include "main.h"
/**
 * Description: print_last_digit - prints the last digit of a number
 * @n: the int to check
 * Return: ld
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');

	return (ld);
}
