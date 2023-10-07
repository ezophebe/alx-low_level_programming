#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @c: declared parameter
 * @s: declared parameter
 * Return: always 0 success
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
