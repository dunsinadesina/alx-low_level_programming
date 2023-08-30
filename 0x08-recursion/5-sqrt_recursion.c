#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function
 * @n: parameter
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int answer;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		answer = _sqrt_recursion2(n, 1, n / 2);
		if (answer * answer == n)
		{
			return (answer);
		}
		else
		{
			return (-1);
		}
	}
}
/**
 * _sqrt_recursion2 - function
 * @n: parameter
 * @i: parameter
 * @j: parameter
 * Return: integer
 */
int _sqrt_recursion2(int n, int i, int j)
{
	int square;
	int middle;

	if (i > j)
	{
		return (j);
	}
	middle = (i + j) / 2;
	square = middle * middle;
	if (square == n)
	{
		return (middle);
	}
	else if (square > n)
	{
		return (_sqrt_recursion2(n, i, middle - 1));
	}
	else
	{
		return (_sqrt_recursion2(n, middle + 1, j));
	}
}
