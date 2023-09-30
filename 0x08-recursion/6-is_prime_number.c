#include "main.h"

/**
 *is_prime_number - function returns 1 if n is prime
 *@n: given value
 *@i: iterator
 *Return 0, or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n-1));
}
{
	int is_prime_number(int n, int i)
		if (i == 1)
			return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_number(n, i - 1);
}

