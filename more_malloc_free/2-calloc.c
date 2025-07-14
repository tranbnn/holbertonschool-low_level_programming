#include "main.h"
/**
 * Description: _calloc - allocates memory for an array with malloc
 * @nmemb: number of elements
 * @size: the number of bytes of array
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);

	if (mem == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < nmemb * size)
	{
		mem[i] = 0;
		i = i + 1;
	}

	return (mem);
}
