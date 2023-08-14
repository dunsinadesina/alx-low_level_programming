#include<stdio.h>
/**
 * main - This is the main function
 *
 * Return: This is always 0
 *
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		int first_dig  = i / 10;
		int second_dig = i % 10;

		if (first_dig != second_dig && first_dig < second_dig)
		{
			putchar(first_dig + '0');
			putchar(second_dig + '0');
			if (i < 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
		i++;
	}
	return (0);
}
