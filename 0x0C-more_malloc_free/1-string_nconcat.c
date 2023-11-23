#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - function concatenates two strings
 *@s1: str one
 *@s2: str two
 *@n: number of bytes of s2 to be concatenate to s1
 *Return: conccatenated string (cs)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, m, p;
	char *cs;

	if (s1 == NULL)
		l = 0;
	else
	{
		for (l = 0; s1[l] != '\0'; l++)
			;
	}
	if (s2 == NULL)
		m = 0;
	else
	{
		for (m = 0; s2[m] != '\0'; m++)
			;
	}
	if (m > n)
		m = n;
	cs = malloc(sizeof(char) * (l + m + 1));
	if (cs == NULL)
		return (NULL);
	for (p = 0; p < l; p++)
		cs[p] = s1[p];
	for (p = 0; p < m; p++)
		cs[p + l] = s2[p];
	cs[l + m] = '\0';
	return (cs);
}
