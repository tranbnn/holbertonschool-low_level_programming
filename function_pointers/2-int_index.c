#include "function_pointers.h"
/**
 * Description: int_index - searches for an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to the function that compares values
 * Return: index of first element that does not return 0, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i; 

	i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if ((cmp)(array[i]) == 0)
		{
			i = i + 1;
		}
		else
		{
			return (i);
		}
	}
	return (-1);
}
