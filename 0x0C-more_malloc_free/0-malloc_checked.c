#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - function allocates memory using malloc
 *@b: input data
 *Return: result(pointer)
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
	{
		exit(98);
	}
	return (result);
}
