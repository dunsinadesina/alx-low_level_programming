#include "main.h"
/**
 * rot13 - encryption
 * @word: parameter
 * Return: string
 */
char *rot13(char *word)
{
	int i;
	char b;

	for (i = 0; word[i] != '\0'; i++)
	{
		char a = word[i];

		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		{
			b = (a >= 'a' && a <= 'z') ? 'a' : 'A';
			word[i] = (a - b + 13) % 26 + b;
		}
	}
	return (word);
}
