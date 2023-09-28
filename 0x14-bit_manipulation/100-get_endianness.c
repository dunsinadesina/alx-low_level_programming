#include "main.h"
/**
 * get_endianness - to get the endianness
 *
 * Return: integer
 */
int get_endianness(void)
{
	int number;
	char *endian;

	number = 1;
	endian = (char *)&number;
	if (*endian == 1)
		return (1);
	return (0);
}
