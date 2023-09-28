#include "main.h"
/**
 * flip_bits - number of bits needs=ed to be flipped
 * @n: parameter
 * @m: parameter
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor_result, bit_count;

	xor_result = n ^ m;
	bit_count = 0;
	while (xor_result > 0)
	{
		bit_count += (xor_result & 1);
		xor_result >>= 1;
	}
	return (bit_count);
}
