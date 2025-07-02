#include "main.h"
/**
 * Description: puts2 - prints every other character of a string
 * @str: the string to be printed.
 * Return: string with missing characters
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}

		count = count + 1;
	}
	_putchar('\n');
}
