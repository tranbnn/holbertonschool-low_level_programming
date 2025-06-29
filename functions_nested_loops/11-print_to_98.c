#include "stdio.h"
#include "main.h"
/**
 * Description: print_to_98 - prints numbers up to 98
 * @n: int to look for
 * Return: n
 */

void print_to_98(int n)
{
	int num;

	if (n >= 98)
	{
		for (num = n; num < 98; --num)
		{
			printf("%d, ", num);
		}
	}
	else
	{
		for (num = n; num < 98; ++num)
		{
			printf("%d, ", num);
		}
	}
       printf("98\n");	
}
