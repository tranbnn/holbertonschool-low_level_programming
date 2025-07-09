#include "main.h"
/**
 * Description: _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be found
 * Return: pointer to first occurence of character @c OR
 * null if not found
 */

char *_strchr(char *s, char c)
{
	int i;
	
	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i = i + 1;
	}

	return ('\0');
}
