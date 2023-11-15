#include "main.h"

/**
 *_strlen_recursion - funtion prints the lenght of a string
 *@s: string to be counted
 *Return: num of string on success or 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
