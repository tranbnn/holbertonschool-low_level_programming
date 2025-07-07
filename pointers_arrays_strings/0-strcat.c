#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string src is to be appended to
 * @src: the string to be appended to dest
 * Returns: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int s, t;

	s = 0;
	t = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (src[t] != '\0')
	{
		dest[s] = src[t];
		t++;
		s++;
	}

	dest[s] = '\0';

	return (dest);
}
