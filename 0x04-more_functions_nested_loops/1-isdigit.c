#include <stdio.h>
#include "main.h"
/**
 * _isdigit - To check for digit
 * @c: parameter
 * Return: Either 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
