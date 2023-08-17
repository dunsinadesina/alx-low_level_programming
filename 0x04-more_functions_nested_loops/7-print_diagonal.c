#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - This is to print diagonal
 * @n: parameter
 */

void print_diagonal(int n)
{
	int space;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 0 ; space < n ; space++)
		{
			for (i = 0 ; i < space ; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
