#include "main.h"

/**
*prime_num - function checks for prime numbers
*@x: given value
*@y: divider
*Return 0, or 1
*/

int prime_num(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
  	else if (x == y)
	{
		return (1);
	}
	return (prime_num(x, y + 1));
}

/**
 * is_prime_number - function returns 1 if n is prime
 * @n: given value
 * @i: iterator
 * Return 0, or 1
 */

int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
