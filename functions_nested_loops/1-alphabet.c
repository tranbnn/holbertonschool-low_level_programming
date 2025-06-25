#include "main.h"
/**
 * Description: print_alphabet - prints the alphabet in lowercase
 * Return: 0 if success
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
	
	_putchar('\n');

}
