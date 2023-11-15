#include "main.h"

/**
 * _sqroot_x - function returns the natural square root of num
 * @x: value given
 * @y: interator
 * Return: -1 or natural square root of n
 */
int _sqroot_x(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_sqroot_x(x, y + 1));
}

/**
 *_sqrt_recursion - function returns the natural square root of n
 *@n: the given input
 *Return: square root of given number
 */

int _sqrt_recursion(int n)
{
	return (_sqroot_x(n, 0));
}
