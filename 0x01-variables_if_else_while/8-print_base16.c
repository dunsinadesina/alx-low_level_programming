#include<stdio.h>
/**
 * main - This is the main function
 *
 * Return: This is always 0
 */
int main(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
		putchar(y);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
