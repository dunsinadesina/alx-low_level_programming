#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of the bit
 *
 * Return: integer value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((int)((n >> index) & 1));
}
