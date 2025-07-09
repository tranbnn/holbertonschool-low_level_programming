#include "main.h"
/**
 * Description: _memcpy - copies memory area
 * @dest: the destination
 * @src: the source
 * @n: input integer
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}

	return (dest);
}

