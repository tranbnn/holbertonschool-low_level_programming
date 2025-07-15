#include "function_pointers.h"
/**
 * Description: array_iterator - executes a function given as a
 * parameters on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: the function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
