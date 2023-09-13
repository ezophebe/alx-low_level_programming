#include "main.h"

/**
*_abs - It computes the absolute value of an integer
*@a: declared parameter
*Return: Always o success
*/
int _abs(int a)
{
	if (a < 0)

		return (-a);

	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
