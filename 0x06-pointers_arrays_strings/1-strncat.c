#include "main.h"

/**
 * _strncat - This funtion concatenates two strings
 * @dest: declared parameter 1
 * @src: declared parameter 2
 * @n: declared parameter 3
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[l + i] = *src;
		src++;
	}
	dest[l + i] = '\0';
	return (dest);
}
