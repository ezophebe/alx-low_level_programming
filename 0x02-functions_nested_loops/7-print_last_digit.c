#include "main.h"

/**
*print_last_digit - it prints the lst digit
*@i: declared parameter
*Return: j
*/
int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (i < 0)

	{
		j = -j;
		_putchar(j + '0');
	}
	else
		_putchar(j + '0');
	return (j);
}
