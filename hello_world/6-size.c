#include <stdio.h>
/**
 * Description: main - prints variable types to stdout
 * Return: 0 if success
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}


