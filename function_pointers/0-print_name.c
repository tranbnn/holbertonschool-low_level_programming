#include "function_pointers.h"

/**
 * Description: print_name - prints a name
 * @name: the name to be printed
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}

	f(name);
}
