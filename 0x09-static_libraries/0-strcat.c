#include "main.h"
/**
 *_strcat - This function concatenates two strings.
 *@dest: declared parameter 1
 *@src: declared parameter 2
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_len;
	int i;

	dest_len = 0;
	src_len = 0;

	for (i = 0 ; dest[i] != '\0'; i++)
	dest_len++;
	for (i = 0 ; src[i] != '\0' ; i++)
	src_len++;
	for (i = 0 ; i <= src_len; i++)
	dest[dest_len + i] = src[i];
	return (dest);
}
