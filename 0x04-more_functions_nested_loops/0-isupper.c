#include "main.h"
/**
*_isupper - checks for uppercase character
*@c: declared parameter
*Return: always 1 on success, 0 on failure
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
