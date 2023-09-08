#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_numeric -  function
 * @str: parameter
 * Return: boolean value
 */
bool is_numeric(const char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (false);
	}
	return (true);
}
/**
 * string_int - function
 * @str: parameter
 * Return: integer
 */
int string_int(const char *str)
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
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
			break;
	}
	return (result * sign);
}
/**
 * multiply - function
 * @num1: parameter
 * @num2: parameter
 * Return: integer
 */
int multiply(int num1, int num2)
{
	int result, sign;

	result = 0;
	sign = 1;
	if (num1 < 0 && num2 >= 0)
	{
		num1 = -num1;
		sign = -1;
	}
	else if (num1 >= 0 && num2 < 0)
	{
		num2 = -num2;
		sign = -1;
	}
	else if (num1 < 0 && num2 < 0)
	{
		num1 = -num1;
		num2 = -num2;
	}
	while (num2 > 0)
	{
		result += num1;
		num2--;
	}
	return (result * sign);
}
/**
 * print_int - function
 * @n: parameter
 * Return: nothing
 */
void print_int(int n)
{
	int i;
	int digit[10];

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	do {
		digit[i] = n % 10;
		n /= 10;
		i++;
	} while (n > 0);
	while (i > 0)
	{
		_putchar('0' + digit[i - 1]);
		i--;
	}
}
/**
 * main -  main function
 * @argc: parameter
 * @argv: parameter
 * Return: o or 1
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int num_1, num_2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_numeric(num1) || !is_numeric(num2))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num_1 = string_int(num1);
	num_2 = string_int(num2);
	if (num_1 == 0 || num_2 == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98); }
	result = multiply(num_1, num_2);
	print_int(result);
	_putchar('\n');
	return (0);
}
