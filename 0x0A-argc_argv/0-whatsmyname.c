#include "main.h"
#include <stdio.h>
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: always 0
 */
int main(int argc, char *argv[])
{

	if (argc > 0 && argv[0] != NULL)
	{
		char *name = argv[0];

		while (*name != '\0')
		{
			_putchar(*name);
			name++;
		}
		_putchar('\n');
	}
	return (0);
}
