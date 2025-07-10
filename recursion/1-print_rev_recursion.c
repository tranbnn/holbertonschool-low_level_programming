#include "main.h"
/**
 * Description: _print_rev_recursion - prints a string in reverse
 * @s: the string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[i]);
}
