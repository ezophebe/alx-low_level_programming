#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of num
 * @n: value given
 * @i: iteration
 * Return: -1, natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

int _sqrt_recursion(int n, int i);
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
