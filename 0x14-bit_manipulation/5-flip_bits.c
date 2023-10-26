#include "main.h"
/**
 * flip_bits - function returns the number of bits flip to get from one toother
 * @n: first number
 * @m: second number
 *
 * Return: unisgned integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, counter;

	result = n ^ m;
	counter = 0;
	while (result > 0)
	{
		counter += result & 1;
		result >>= 1;
	}
	return (counter);
}
