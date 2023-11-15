#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: the given value
 * @y: the power value
 * Return: 0, 1 or the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
