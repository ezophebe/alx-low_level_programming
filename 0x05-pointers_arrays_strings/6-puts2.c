#include "main.h"
/**
 * puts2 - Function prints every other char of a str starts with 1st char
 * @str: declared char
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
