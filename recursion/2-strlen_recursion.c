#include "main.h"
/**
 * Description: _strlen_recursion - returns the length of the string
 * @s: the string to be measured
 * Return: int of length
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
