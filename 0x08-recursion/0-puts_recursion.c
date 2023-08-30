#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function
 * @s: parameter
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
