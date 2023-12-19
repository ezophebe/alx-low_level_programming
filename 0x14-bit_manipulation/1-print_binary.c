#include "main.h"

/**
 *print_bin - function checks for bin num
 *@n: number to be converted
 *Return: none
 */

void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar ('1');
	if ((n & 1) == 0)
		_putchar ('0');
}
/**
 *print_binary - function that prints the binary representation of a number.
 *@n: number to be converted
 *Return: bin num
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar ('0');
	else
	{
		print_bin(n);
	}
}
