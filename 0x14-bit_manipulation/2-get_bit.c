#include "main.h"

/**
 *get_bit - function returns the value of a bit at a given index.
 *@n: num to work on
 *@index: the index, starting from 0 of the bit to be got
 *Return: value of bit at index 'index' or -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
