#include "dog.h"
#include <stdlib.h>

/**
 * Description: free_dog - frees dogs
 * @d: the dog
 * Return: free the dogs
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
