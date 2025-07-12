#include "main.h"

/**
 * Description: *create_array - creates an array of chars,
 * and initialises it with a specific char.
 * @size: int that represents size of array
 * @c: char that will initialise array
 * Return: NULL if size = 0, or a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc (size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
