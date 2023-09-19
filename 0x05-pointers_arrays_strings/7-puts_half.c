#include "main.h"
/**
 * puts_half - Functioon prints half of a string
 * @str: declared char
 * Return: void
 */
void puts_half(char *str)
{
	int i, n; 

	for (i = 0; str[i] != '\0'; i++)
	
		n = i / 2;
	if (i % 2 == 1) 
		n++;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
