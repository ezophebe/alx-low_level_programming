#include "main.h"
/**
 * print_diagonal - function draws a diagonal line on the terminal
 *@n: declared parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	}
}
