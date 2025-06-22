#include <stdio.h>
/**
 * Description: main - prints the alphabet in lowercase
 * Return: 0 if success
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	
	putchar('\n');

}
