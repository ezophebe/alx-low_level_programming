#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - function frees dogs
 *@d: pointer to dog that is to be freed
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

