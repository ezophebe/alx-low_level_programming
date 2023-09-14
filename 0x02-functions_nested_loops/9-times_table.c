#include "main.h"
#include <stdio.h>
/**
*times_table - this function prints the nine times table
*
*Return: void
*/
void times_table(void)
{
	int i, n, result;


	for (i = 0; i < 10; i++)
	{
	for (n = 0; n < 10; n++)
	{
		result = i * n;
	if (n == 0)
		printf("%d, ", result);

	else
	{
		printf("%2d", result);
		if (n != 9)
		printf(", ");
	}
	}
	printf("\n");
	}
}
