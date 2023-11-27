#include "dog.h"
#include <stdio.h>

/**
 *init_dog - function initialize a variable
 *@d: pointer to dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
