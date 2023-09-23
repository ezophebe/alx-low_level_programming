#include "main.h"
/**
 *leet - fuction encodes a string into 1337
 *@n: declared pointer
 *Return: n
 */
char *leet(char *n)
{

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (int i = 0; n[i] != '\0'; i++)
	{

	for (int j = 0; j < 10; j++)
	{
		if (n[i] == s1[j])
		{
			n[i] = s2[j];
			break;
		}
	}
	}
		return (n);
}
