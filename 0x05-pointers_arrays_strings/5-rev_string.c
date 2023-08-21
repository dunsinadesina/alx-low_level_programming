#include "main.h"

/**
 * rev_string - Reverse string
 * @s: parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int counter;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i < counter / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = j;
	}
}
