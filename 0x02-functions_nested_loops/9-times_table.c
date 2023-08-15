#include "main.h"
/**
 * times_table - This is for times table for a specific format
 * @void: This is a parameter
 * Return: This is always 0
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			result = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10 && j > 0)
				_putchar(' ');
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
				_putchar(result + '0');
		}
		_putchar('\n');
	}
}
