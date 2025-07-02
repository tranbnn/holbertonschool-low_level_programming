#include "main.h"
/**
 * Description: puts_half - prints half of a string.
 * @str: the string whose half is to be printed
 * Return: half of a string
 */
void puts_half(char *str)
{
	int l, n;
	
	for (l = 0; str[l] != '\0'; ++l);
	
	if (l % 2 == 0)
	{
		for (n = l / 2; str[n] != '\0'; ++n)
		{
			_putchar(str[n]);
		}
	} else
	{
		for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
