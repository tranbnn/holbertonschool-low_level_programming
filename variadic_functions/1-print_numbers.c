#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * Description: print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers to be passed to the function
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list args;

	i = 0;

	va_start(args, n);

	while (i < n)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);
		
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
