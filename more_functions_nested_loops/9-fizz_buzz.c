#include "main.h"
#include "stdio.h"
/**
 * Description: main - prints numbers from 1 to 100 
 * multiples of three print Fizz, and multiples of five print Buzz.
 * Numbers that are multiple of both three and five print FizzbBuzz.
 * Return: 0 if success
 */

int main(void)
{
	int num; 

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && !(num % 3 == 0))
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	
	return (0);
}

