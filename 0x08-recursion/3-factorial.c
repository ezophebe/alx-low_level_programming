#include "main.h"

/**
 *factorial - function returns the factorial value of a given number
 *@n: given num
 *Return: -1 or factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
