#include "function_pointers.h"
/**
 *array_iterator - function that prints each array element on a newline
 *@array: array parameter
 *@size: how many element to be printed
 *@action: pointer to print in regular or hexadecimal
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
