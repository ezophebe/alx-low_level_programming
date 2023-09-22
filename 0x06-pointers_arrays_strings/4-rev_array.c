#include "main.h"

/**
 *reverse_array - This function reverses the content of an array
 *@a: declared parameter 1
 *@n: declared parameter 2
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0 ; i < n / 2 ; i++)
	{
		r = a[i];
		a[i] = a[n - 1 - i];
			a[n - 1 - i] = r;
	}
}
