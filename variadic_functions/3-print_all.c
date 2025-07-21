#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Description: print_a_char - prints char types
 * @args: variable arguments
 * Return: void
 */


void print_a_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * Description: print_an_int - prints integer types
 * @args: variable arguments
 * Return: void
 */

void print_an_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * Description: print_a_float - prints float types
 * @args: variable arguments
 * Return: void
 */

void print_a_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * Description: print_a_str - prints a string
 * @arg: variable arguments
 * Return: void
 */

void print_a_str(va_list args)
{
	char *str;

	str = va_arg(args, char*);

	printf("%s", str ? str : "(nil)");

}

/**
 * Description: print_all - prints anything
 * @format: argument types to be passed to the function
 * Return: anything
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list args;
	char *separator = "";

	types format_types[] = {
		{"c", print_a_char},
		{"i", print_an_int},
		{"f", print_a_float},
		{"s", print_a_str}
	};

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *format_types[j].identifier)
			{
				printf("%s", separator);
				format_types[j].f(args);
				separator = ", ";
				break;
			}
			
		j++;
		}
	i++;
	}

	va_end(args);
	printf("\n");
}
