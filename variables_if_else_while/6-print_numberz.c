#include <stdio.h>
/**
 * Description: main - prints all single digit numbers of base 10 starting
 * from 0, followed by a new line
 * Return: 0 if success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);

}
