#include "main.h"

/**
 *_strlen_recursion - function counts the lenght of the string given
 *@s: input data/string given
 *Return: the lenght of the string given
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *compare_string - function compares the characters of the string given
 *@s: input data/string given
 *@left: interator 1
 *@right:interator 2
 *Return: 0
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}

/**
 *is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 *@s: string given
 *Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
