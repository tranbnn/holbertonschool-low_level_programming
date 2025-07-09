#include "main.h"

/**
 * Description: _memset - fills memory with a constant byte
 * @n: input integer
 * @s: input string
 * @b: input string
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
