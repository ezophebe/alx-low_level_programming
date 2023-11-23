#include "main.h"
#include <stdlib.h>

/**
 *array_range - function creates an array of integers
 *@min: minimum value of array
 *@max: maximum value
 *Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int l, m;
	int *pt;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	pt = malloc(sizeof(int) * m);
	if (pt == NULL)
		return (NULL);
	for (l = 0; l < m; l++)
	{
		pt[l] = min;
		min++;
	}
	return (pt);
}
