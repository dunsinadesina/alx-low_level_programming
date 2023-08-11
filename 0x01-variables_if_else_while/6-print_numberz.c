#include<stdio.h>
/**
 * main - This is the main function
 *
 * Return: This is always 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		putchar('0' + b);
	putchar('\n');
	return (0);
}
