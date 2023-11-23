#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function allocates memory for an array, using malloc
 *@nmemb: block of memory to be allocated number
 *@size: input data of integer
 *Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int l;
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	for (l = 0; l < (nmemb * size); l++)
		pt[l] = 0;
	return (pt);
}
