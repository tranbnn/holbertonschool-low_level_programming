#include "main.h"
/**
 * Description: print_sign - prints the sign of a number
 * @n: the character to check
 * Return: 1 if greater than 0, 0 if is zero, or '-1' if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
