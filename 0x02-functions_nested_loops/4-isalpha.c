#include "main.h"

/**
*_isalpha - This function checks for alphabetic character.
*@c: parameter declared
*Return: 1 and 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
