#include "main.h"
#include <stdio.h>

/**
 * print_array - fuction prints n elements of an array of integer
 * @a:declared int 1
 * @n:decalred int2
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	printf("\n");
}
