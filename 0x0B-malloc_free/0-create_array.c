#include "main.h"

/**
 *create_array - functn creates array of chars nd init it with a specf char
 *@c: specified char to store array
 *@size: size of array
 *Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
