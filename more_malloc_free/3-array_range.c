#include "main.h"
/**
 * Description: array_range - creates an array of integers
 * @min: minimum integers
 * @max: maximum integers
 * Return: the pointer to the newly created array, or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (min <= max)
	{
		array[i] = min;
		min = min + 1;
		i = i + 1;
	}
	return (array);
}
