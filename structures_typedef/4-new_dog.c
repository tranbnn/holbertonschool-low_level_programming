#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
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
		return (NULL);
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

/**
 * Description: new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *namecopy;
	char *ownercopy;

	ptr = malloc(sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}

	namecopy = _strdup(name);

	if (namecopy == NULL)
	{
		free(ptr);
		return (NULL); 
	}

	ptr->name = namecopy;
	ptr->age = age;
	
	ownercopy = _strdup(owner);

	if (ownercopy == NULL)
	{
		free(ptr);
		free(namecopy);
		return (NULL);
	}

	ptr->owner = ownercopy;

	return (ptr);
}
