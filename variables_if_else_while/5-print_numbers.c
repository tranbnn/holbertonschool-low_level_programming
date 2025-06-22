#include <stdio.h>
/**
 * Description: main - prints out single digit numbers with a base
 * of 10 starting from 0
 * Return: 0 if success
 */
int main(void)
{
	char num; 

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);

}
