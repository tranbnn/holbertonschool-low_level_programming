#include "main.h"
/**
 * Description: string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @s: string to be capitalised
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int i; 

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
