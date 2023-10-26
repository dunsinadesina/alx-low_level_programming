#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer parameter
 * @index: parametwr
 *
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (-1);
}
