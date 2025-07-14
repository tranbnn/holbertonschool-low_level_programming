#include "main.h"
/**
 * Description: _strdup - returns a pointer to a new space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string to be duplicated
 * Return: NULL if str = NULL, or pointer
 */
char *_strdup(char *str)
{
	int i;
	char *dupe;

	if (str == NULL)
	{
		return(NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	dupe = malloc(i + 1);

	i = 0;

	while (str[i] != '\0')
	{
		if (dupe == NULL)
		{
			return (NULL);
		}
		dupe[i] = str[i];
		i = i + 1;
	}
	dupe[i] = '\0';
	return (dupe);
}
