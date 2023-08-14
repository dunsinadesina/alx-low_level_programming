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

	while (i < 1000)
	{
		int fd = i / 100;
		int sd = (i / 10) % 10;
		int td = i % 10;

		if (fd != sd && fd != td && sd != td && fd < sd && sd < td)
		{
			putchar(fd + '0');
			putchar(sd + '0');
			putchar(td + '0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
