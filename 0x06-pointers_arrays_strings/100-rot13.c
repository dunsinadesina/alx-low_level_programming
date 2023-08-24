#include "main.h"
/**
 * rot13 - encryption
 * @word: parameter
 * Return: string
 */
char *rot13(char *word)
{
	char *a = word;
	char *b = word;
	char j;

	while (*a != '\0')
	{
		if ((*a >= 'a' && *a <= 'z') || (*a >= 'A' && *a <= 'Z'))
		{
			j = (*a >= 'a' && *a <= 'z') ? 'a' : 'A';
				*b = ((*a - j + 13) % 26) + j;
		}
		else
		{
			*a = *b;
		}
		a++;
		b++;
	}
	*b = '\0';
	return (word);
}
