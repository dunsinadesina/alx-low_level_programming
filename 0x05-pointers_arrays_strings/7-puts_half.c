#include "main.h"
/**
 * puts_half - Prints the last half characters
 * @str: parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j, counter;

	counter = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		counter++;
	}
	j = (counter - 1) / 2;
	for (i = j + 1 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
