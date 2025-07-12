#include "main.h"

int true_sqrt(int n, int i);

/**
 * Description: _sqrt_recursion - returns the natural square root of a number
 * @n: the input integer
 * Return: the square root of the number or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (true_sqrt(n, 0));
}

/**
 * Description: true_sqrt - returns the natural square root of a number
 * @n: the input integer
 * @i: the iterator integer
 * Return: the square root of the number of -1
 */

int true_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (true_sqrt(n, i + 1));
}
