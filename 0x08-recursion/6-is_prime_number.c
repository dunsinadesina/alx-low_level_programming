#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function
 * @n: parameter
 * Return: integer
 */
int is_prime_number(long int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_number_recursive(n, 2));
	}
}
/**
 * prime_number_recursive - function
 * @n: parameter
 * @i: parameter
 * Return: integer
 */
int prime_number_recursive(long int n, long int i)
{
	if ((i * i) > n)
	{
	return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number_recursive(n, i + 1));
	}
}
