#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * @void: takes no parameter
 *
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;
	if (*c == 1)
		return (1);
	else
		return (0);
}
