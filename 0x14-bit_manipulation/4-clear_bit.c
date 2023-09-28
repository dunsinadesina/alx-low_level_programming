#include "main.h"
/**
 * clear_bit - value of bit of index to 0
 * @n: pointer parameter
 * @index: index
 *
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
