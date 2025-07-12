#include "main.h"
#include <stdlib.h>

/**
 * Description: main - multiplies two numbers
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: product
 */

int main(int argc, char *argv[])
{
	int p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", p);
	return (0);
}
