#include "main.h"
/**
 * _puts - A function that prints a string to stdout
 * @str: declared variable
 * Return: the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
