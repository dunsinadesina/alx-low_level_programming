#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: parameter
 * @argv: parameter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
