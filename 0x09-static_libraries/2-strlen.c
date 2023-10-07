#include "main.h"
/**
 * _strlen - A function that returns the lenght of a string
 * @s: declared char
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
	i++;
	return (i);
}
