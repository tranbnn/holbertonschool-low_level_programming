#include "main.h"
/**
 * Description: print_array - prints n elements of an array of integers
 * @a: the pointer
 * @n: the number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
