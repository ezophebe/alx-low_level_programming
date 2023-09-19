#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: string declared
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c++;

	for (i = 0; i < c / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = j;
	}
}
