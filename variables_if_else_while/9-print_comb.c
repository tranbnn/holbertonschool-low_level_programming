#include <stdio.h>
/**
 * Description: main - prints all possible combinations of
 * single-digit numbers.
 * Return: 0 if success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');
		
		if (digit != 9)
		{
		
		putchar(',');
		putchar('_');
		}
	}

	putchar('\n');

	return (0);

}
 
