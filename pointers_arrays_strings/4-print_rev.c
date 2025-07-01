#include "main.h"
/**
 * Description: print_rev - prints a string, in reverse
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int e, n, str;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}


	str = e;

	for (n = str - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
