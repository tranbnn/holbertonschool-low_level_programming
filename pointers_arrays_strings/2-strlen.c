#include "main.h"
/**
 * Description: _strlen - returns the length of the string
 * @s: char that represents the length of a string
 */
int _strlen(char *s)
{
	int e;

	while (s[e] != '\0')
	{
		e++;
	}

	return (e);
}
