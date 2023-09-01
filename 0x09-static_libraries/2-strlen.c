#include "main.h"
/**
 * _strlen - Number of string
 * @s: parameter
 * Return: counter
 */
int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	return (counter);
}
