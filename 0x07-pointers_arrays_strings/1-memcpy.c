#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: location for new memory
 * @src: memory to be copied
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m;
	int i;

	m = 0;
	i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
