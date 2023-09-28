#include "main.h"
/**
 * binary_to_uint - function to convert from binary to int
 * @b: parameter
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, base;
	int length;

	result = 0;
	base = 1;
	if (b == NULL)
		return (0);
	for (length = 0; b[length];)
		length++;
	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		result += (b[length] - '0') * base;
		base *= 2;
	}
	return (result);
}
