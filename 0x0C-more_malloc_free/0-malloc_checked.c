#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - function allocates memory using malloc
 *@b: memory allocated
 *Return: result
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
