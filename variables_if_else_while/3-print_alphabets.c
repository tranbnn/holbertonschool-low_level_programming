#include <stdio.h>

/**
 * Description: main - prints out the alphabet in lowercase,
 * and then uppercase to stdout
 * Return: 0 if success
 */
int main(void)
{
	char lower;
	char upper;
	
	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	
	putchar('\n');
	
	return (0);
}
