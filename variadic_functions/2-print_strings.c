#include "variadic_functions.h"

/**
 * Description: print_string - prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int str;
	va_list args;

	i = 0;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, unsigned int);
		printf("%d", str);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
