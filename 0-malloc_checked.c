#include "main.h"

/**
 * Description: malloc_checked - allocates memory using malloc
 * @b: int for memory to be allocated to
 * Return: NULL if string is NULL, or duplicated string if successful
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
