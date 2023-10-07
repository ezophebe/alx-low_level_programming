#include "main.h"
/**
 *_atoi - function aonverts a string into an integer
 *@s: The string to be converted
 *Return: an integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int num = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0\)
	{
		if (s[i] == ' ')
		sign *= -1
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	num *= sign;
	return (num);
}
