#include "main.h"

/**
 *binary_to_uint - function converts a binary number to an unsigned integer
 *@b: pointer the string (char 0 and 1) to be converted
 *Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t i = 0;
	size_t j = 0;
	size_t convert_num = 0;
	size_t pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--)
			pow = pow * base;
		convert_num = convert_num + (pow * (b[i] - 48));
		len--;
		pow = 1;
	}
	return (convert_num);
}
