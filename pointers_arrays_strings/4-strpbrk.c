#include "main.h"
/**
 * Description: _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: is accepted bytes
 * Return: blah
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j = j + 1;
		}

		i = i + 1;
	}
	return ('\0');
}
