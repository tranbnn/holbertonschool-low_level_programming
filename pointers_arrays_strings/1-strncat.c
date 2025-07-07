#include "main.h"

/**
 * Description: _strncat - concatenates two strings, taking n bytes
 * @dest: the string that @src is to be appended to
 * @src: the string that will be appended to @dest
 * @n: the number of bytes that will be copied from @src to @dest
 * Return: a pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s, t;

	s = 0;
	t = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (src[t] != '\0' && t < n)
	{
		dest[s] = src[t];
		s++;
		t++;
	}

	dest[s] = '\0';

	return (dest);
}
