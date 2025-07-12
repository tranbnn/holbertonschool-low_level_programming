#include "main.h"

int true_prime(int n, int i);

/**
 * Description: is_prime_number - identifies prime numbers
 * @n: the number to be inputted
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (true_prime(n, n - 1));
}

/**
 * Description: true_prime - identifies prime numbers
 * @n: input number
 * @i: iterating number
 * Return: prime number
 */

int true_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if  (n % 1 == 0 && i > 0)
	{
		return (0);
	}
	return (true_prime(n, i - 1));
}
