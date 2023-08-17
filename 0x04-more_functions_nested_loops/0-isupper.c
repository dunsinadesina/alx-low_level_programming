#include <stdio.h>
#include "main.h"
/**
 * _isupper - This is to check for uppercase
 * @c: parameter
 * Return: Either 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
