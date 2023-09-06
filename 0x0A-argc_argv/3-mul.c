#include "main.h"
#include <stdio.h>
/**
 * string_to_int - function
 * @str: parameter
 * Return: integer
 */
int string_to_int(char *str)
{
	int result, sign, i;

	result = 0;
	sign = 1;
	i = 0;
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
 * main - main function
 * @argv: parameter
 * @argc: parameter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int result, num1, num2, divisor, digit;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	num1 = string_to_int(argv[1]);
	num2 = string_to_int(argv[2]);
	result = num1 * num2;
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}
	divisor = 1;
	while (divisor <= result / 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = result / divisor;
		_putchar('0' + digit);
		result %= divisor;
		divisor /= 10;
	}
	_putchar('\n');
	return (0);
}
