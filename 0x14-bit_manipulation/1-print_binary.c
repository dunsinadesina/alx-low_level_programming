#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: parameter
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if ((n & 1) == 0)
		_putchar('1');
	else
		_putchar('0');
}
