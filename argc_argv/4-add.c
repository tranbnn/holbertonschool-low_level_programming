#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * Description: main - adds positive numbers
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: Sum of numbers
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int p;
	unsigned int sum;
	char *t;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			t = argv[i];

			for (p = 0; p < strlen(t); p++)
			{
				if (t[p] < 48 || t[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(t);
			t++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
