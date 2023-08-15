#include "main.h"
/**
 * print_last_digit - This is to print tje last digit of a number
 * @i: This is a parameter
 * Return: This returns the value
 */
int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;
	if (i < 0)
		lastdigit = -lastdigit;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
