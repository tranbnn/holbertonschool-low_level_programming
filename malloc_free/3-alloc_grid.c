#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Description: alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @width: width
 * @height: height
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(array[j]);
				j = j + 1;
			}
			free(array);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			array[i][j] = 0;
			j = j + 1;
		}
		i = i + 1;
	}
	return (array);
}
