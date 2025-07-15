#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: op_add - adds two integers together
 * @a: first integer to be added
 * @b: second integer to be added
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * Description: op_sub - subtracts two integers
 * @a: first integer to be subtracted
 * @b: second integer to be subtracted
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * Description: op_mul - multiplies two integers
 * @a: first integer to be multiplied
 * @b: second integer to be multiplied
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * Description: op_div - divides two integers
 * @a: first integer to be divided
 * @b: second integer to be divded
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * Description: op_mod - returns the remainder of a divided by b
 * @a: the first integer to be divided
 * @b: the second integer to be divided
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
