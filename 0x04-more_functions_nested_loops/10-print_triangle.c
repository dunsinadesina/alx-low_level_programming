#include <stdio.h>
#include "main.h"
/**
 * print_triangle - This prints the triangle
 * @size: paramater
 */

void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1 ; j <= size ; j++)
		{
			for (space = 1 ; space <= size - j ; space++)
			{
				_putchar(' ');
			}
			for (i = 1 ; i <= j ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
