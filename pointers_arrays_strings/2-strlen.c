#include "main.h"
/**
 * Description: _strlen - returns the length of the string
 * @s: char that represents the length of a string
 * Return: e or length of the string
 */
int _strlen(char *s)
{
	int e;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}

	return (e);
}
