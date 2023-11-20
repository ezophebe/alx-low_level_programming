#include "main.h"

/**
 *_strdup - function returns a pointer to  newly allocated space in memory
 *@str: memory to be duplicated
 *Return: pointer c or NULL
 */
char *_strdup(char *str)
{
	int i;
	char *c;
	int count;

	count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	c = malloc(sizeof(char) * count + 1);

	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c[i] = str[i];

	return (c);
}

