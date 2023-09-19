#include "main.h"
/**
 *_strcpy - function copies the string pointed to by src
 *@dest: declared string
 *@src: declared string
 *Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
