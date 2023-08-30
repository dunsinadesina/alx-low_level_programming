#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial function
 * @n: parameter
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
