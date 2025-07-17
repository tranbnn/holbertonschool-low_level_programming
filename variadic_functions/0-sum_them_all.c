#include "variadic_functions.h"
/**
 * Description: sum_them_all - returns the sum of all its parameters
 * @n: a constant value that is to be added with other parameters
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	i = 0;

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, unsigned int);
		i++;
	}

	va_end(args);
	return (sum);
}
