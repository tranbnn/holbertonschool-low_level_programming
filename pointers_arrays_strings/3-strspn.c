#include "main.h"

/**
 * Description: _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: input character
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int byte;

	i = 0;
	byte = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				byte = byte + 1;
				break;
			}
			j = j + 1;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i = i + 1;
	}

	return (byte);

}
