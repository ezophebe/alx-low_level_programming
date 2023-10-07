#include "main.h"

/**
 *_strncpy - This function copies two string
 *@dest: declared parameter for destination
 *@src: declared parameter for source
 *@n: declared parameter for no of string
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
