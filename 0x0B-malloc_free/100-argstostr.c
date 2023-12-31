#include "main.h"

/**
 *argstostr - function that concatenates all the arguments of your program
 *@ac: input
 *@av: double pointer array
 *Return: pointer to str or null
 */
char *argstostr(int ac, char **av)
{
	int i;
	int n;
	int r = 0;
	int l = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; i < ac; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
