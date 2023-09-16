#include "main.h"
/**
 * more_numbers - function prints 10 times numbers 0-9
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)

	{
	for (j = 0; j <= 14; j++)
	{

	if (j > 9)
	{

		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
	}
	else
	{
	_putchar('\n');
	}
	}
	}
}
