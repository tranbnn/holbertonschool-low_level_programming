#include "main.h"
/**
 * Description: _strstr - locates a substring
 * @haystack: the haystack
 * @string: the string
 * Return: returns a pointer to the beginning of the located substring
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;

	if (needle[i] == 0)
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			i = i + 1;
		}
		haystack = haystack + 1;
	}
	return ('\0');
}
