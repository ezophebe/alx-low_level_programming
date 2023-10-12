#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - function concatenates two strings
 *@s1: str one
 *@s2: str two
 *@n: number of bytes
 *Return: conccatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1leng = 0;
	unsigned int s2leng = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1leng++;
	for (i = 0; s2[i] != '\0'; i++)
		s2leng++;

	result = malloc(sizeof(char) * (s1leng + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= s2leng)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[s1leng + i] = s2[i];
				result[s1leng + i] = '\0';
	}
	else
	{
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[s1leng + 1] = s2[i];
			result[s1leng + i] = '\0';
	}
	return (result);
}
