#include <stdio.h>
#include "main.h"
/**
 * print_numbers - This outputs digits
 * @void: no parameter
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
