#include <stdio.h>
#include "main.h"
/**
 * print_square - This prints square
 * @size: parameter
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0 ; j < size ; j++)
		{
			for (i = 0 ; i < size ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
