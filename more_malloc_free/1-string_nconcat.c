#include "main.h"

/**
 * Description: str_len - function that finds length of string
 * @s: string whose length is to be found
 * Return: length of string
 */

unsigned int str_len(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x = x + 1;
	}
	return (x);
}


/**
 * Description: string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the number of bytes of s2
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	int k;
	unsigned int s2_len_to_be_printed;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s2_len_to_be_printed = n;
	if (n >= str_len(s2))
	{
		s2_len_to_be_printed = str_len(s2);
	}
	concat = malloc(str_len(s1) + s2_len_to_be_printed + 1);
	i = 0;
	j = 0;
	k = 0;
	if (concat == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		concat[k] = s1[i];
		i = i + 1;
		k = k + 1;
	}
	while (j < s2_len_to_be_printed)
	{
		concat[k] = s2[j];
		j = j + 1;
		k = k + 1;
	}
	concat[k] = '\0';
	return (concat);
}
