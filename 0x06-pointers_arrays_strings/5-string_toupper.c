#include "main.h"
/**
 * string_toupper - converts string to uppercase
 * @i: parameter
 * Return: character
 */

char *string_toupper(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
		{
			i[j] = i[j] - 'a' + 'A';
		}
	}
	return (i);
}
