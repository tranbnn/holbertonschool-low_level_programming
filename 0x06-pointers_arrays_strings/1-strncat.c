#include "main.h"

/**
 * Description: _strncat - concentrates two strings
 * @dest: the string @src is to be appended to
 * @src: the string that is to be appended to @dest
 * @n: the bytes from src
 * Return: a pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s, i;

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
