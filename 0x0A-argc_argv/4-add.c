#include "main.h"
#include <stdio.h>
/**
 * is_digit - function
 * @str: parameter
 * Return: integer
 */
int is_digit(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * string_to_integer - function
 * @str: parameter
 * Return: integer
 */
int string_to_integer(char *str)
{
	int result, sign, i;

	result = 0;
	i = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/**
 * print_integer - function
 * @n: parameter
 * Return: void
 */
void print_integer(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_integer(n / 10);
	}
	_putchar('0' + (n % 10));
}
/**
 * main - main function
 * @argc: parameter
 * @argv: parameter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (1);
		}
		result += string_to_integer(argv[i]);
	}
	print_integer(result);
	_putchar('\n');
	return (0);
}
