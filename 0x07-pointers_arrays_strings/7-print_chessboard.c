#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print chessboard
 * @a: parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
			if (column == 7)
			{
				_putchar('\n');
			}
		}
	}
}
