#include "variadic_functions.h"

/**
 * Description: print_a_char - prints char types
 * @args: variable arguments
 * Return: void
 */


void print_a_char(va_list args)
{
	printf("%c", va_args(args, int));
}

/**
 * Description: print_an_int - prints integer types
 * @args: variable arguments
 * Return: void
 */

void print_an_int(va_list args)
{
	printf("%i", va_args(args, int));
}

/**
 * Description: print_a_float - prints float types
 * @args: variable arguments
 * Return: void
 */

void print_a_float(va_list args)
{
	printf("%f", va_args(args, double));
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

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
}

/**
 * Description: print_all - prints anything
 * @format: argument types to be passed to the function
 * Return: anything
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;

	va_start(args, format);

	i = 0;
	
	va_end(args);
	print('\n');
}
