#include "variadic_functions.h"



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
