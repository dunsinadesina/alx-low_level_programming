#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - This is to write numbers to 98
 * @n: This is a parameter
 * Return: This is always 0
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i < 98 ; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
