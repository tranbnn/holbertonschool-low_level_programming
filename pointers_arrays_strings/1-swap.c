#include "main.h"
/**
 * Description: swap_int - swaps values of two integers
 * @a: first int to have value swapped
 * @b: second int to have value swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
