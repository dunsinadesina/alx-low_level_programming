#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: parameter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int digit, number_arguments;

	number_arguments = argc - 1;
	while (number_arguments >= 0)
	{
		digit = number_arguments % 10;
		_putchar('0' + digit);
		number_arguments /= 10;
	}
	_putchar('\n');
	return (0);
}
