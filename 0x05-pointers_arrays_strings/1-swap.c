#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap two values
 * @a: parameter a
 * @b: parameter b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
