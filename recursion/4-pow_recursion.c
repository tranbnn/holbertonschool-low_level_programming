#include "main.h"
/**
 * Description: _pow_recursion - returns the value of x to the power of y
 * @x: the base
 * @y: the power
 * Return: the result or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
