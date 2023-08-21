#include "main.h"
/**
 * print_rev - Prints characters in reverse order
 * @s: paramter
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int counter;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
