#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its paramters
 *@n: the num of paramters passed to the function
 *@...: a variable number of paramters to calc their sum of
 *Return: If n == 0 (0) or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list allparam;
	unsigned int i;
	unsigned int sum = 0;

	va_start(allparam, n);

	for (i = 0; i < n; i++)
	sum += va_arg(allparam, int);

	va_end(allparam);

	return (sum);
}

