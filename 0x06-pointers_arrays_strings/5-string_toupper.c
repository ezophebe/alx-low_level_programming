#include "main.h"

/**
 *string_toupper - function changes all lower case letter of astring to upper
 *@u: declared pointer
 *Return: u
 */
char *string_toupper(char *u)
{
	int i = 0;

	while (u[i] != '\0')
	{
		if (u[i] >= 'a' && u[i] <= 'z')
		{
			u[i] = u[i] - 32;
		}
			i++;
	}
	return (u);
}
