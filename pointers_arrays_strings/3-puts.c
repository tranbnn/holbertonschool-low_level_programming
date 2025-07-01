#include "main.h"
/**
 * Description: _puts - prints a string to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
