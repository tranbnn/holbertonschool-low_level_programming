#include "main.h"

/**
 * Description: reverse_array - reverses the content of an
 * array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int temp[n];
	int i;

	for (i = 0; i < n; i++)
	{
		temp [i] = arr[n - i - 1];
	}

	for(i = 0; i < n; i++)
	{
		arr[i] = temp[i];
	}
}

