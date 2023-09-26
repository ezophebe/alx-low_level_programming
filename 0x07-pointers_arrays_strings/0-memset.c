#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer contains memory adress to be filled
 * @b: the end result
 * @n: variable to be changed
 * Return: to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
