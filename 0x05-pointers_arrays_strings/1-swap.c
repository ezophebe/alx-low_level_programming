#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 *@a: int declared 1
 *@b: int declared 2
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;

}
