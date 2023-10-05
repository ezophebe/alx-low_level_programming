#include "main.h"

/**
 * str_concat - function concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: the output
 */
char *str_concat(char *s1, char *s2)
{
	int s1length = 0;
	int s2length = 0;
	int i;
	char *op;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1length++;
	for (i = 0; s2[i] != '\0'; i++)
		s2length++;

	op = malloc(sizeof(char) * (s1length + s2length) + 1);

	if (op == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		op[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		op[s1length + i] = s2[i];
	return (op);
}
