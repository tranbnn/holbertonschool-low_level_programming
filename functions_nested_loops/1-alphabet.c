#include "main.h"
/**
 * Description: print_alphabet - prints alphabet
 * 		in lowercase, with new line
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		_putchar(letter);

	_putchar('\n');
}
