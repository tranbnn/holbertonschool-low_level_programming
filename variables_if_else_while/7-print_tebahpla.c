#include <stdio.h>
/**
 * Description: main - prints alphabet in reverse and lowercase
 * Return: 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
