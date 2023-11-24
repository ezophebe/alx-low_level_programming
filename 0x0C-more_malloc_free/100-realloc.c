#include "main.h"
#include <stdlib.h>

/**
 *_realloc - function re allocates a memory block using malloc and free
 *@ptr: old pointer to allocated memory
 *@old_size: size of old allocated memory
 *@new_size: size of the ne re allocated memory
 *Return: pointer to the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int l, m = new_size;
	char *pt;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
			return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (l = 0; l < m; l++)
		pt[l] = oldptr[l];
	free(ptr);
	return (pt);
}
