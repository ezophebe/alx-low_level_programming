#include "main.h"

/**
 * _print_rev_recursion - Function prints strings in reverse
 * @s: strings to be printed out
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
