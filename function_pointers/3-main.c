#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - mystery
 * @argc: number of arguments in command
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	answer = get_op_func(argv[2])(num1, num2);

	printf("%d\n", answer);
	return (0);
}
