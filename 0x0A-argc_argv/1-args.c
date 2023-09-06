#include <stdio.h>
#include "main.h"
/**
 * argument  - main function
 * @argv: parameter
 * Return: integer
 */
int argument(char *argv[])
{
	int count;

	count = 0;
	while (argv[count] != NULL)
		count++;
	return (count);
}
/**
 * main - main function
 * @argc: parameter
 * @argv: parameter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, digit, count;

	count = argument(argv);
	for (i = 0; i < argc; i++)
	{
		count++;
	}
	while (count > 0)
	{
		digit = count % 10;
		_putchar('0' + digit);
		count /= 10;
	}
	_putchar('\n');
	return (0);
}
