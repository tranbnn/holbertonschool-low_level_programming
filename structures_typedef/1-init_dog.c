#include "dog.h"
/**
 * Description: init_dog - initialises a variable of type struct dog
 * @d: the structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
