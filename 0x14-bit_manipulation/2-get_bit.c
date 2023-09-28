#include "main.h"
/**
 * get_bit - value of bit of index
 * @n: parameter
 * @index: index
 *
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
