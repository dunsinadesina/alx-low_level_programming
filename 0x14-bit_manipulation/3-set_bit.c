#include "main.h"
/**
 * set_bit - value of a bit at an index
 * @n: pointer parameter
 * @index: index
 *
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
