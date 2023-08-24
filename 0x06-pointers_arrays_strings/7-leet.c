#include "main.h"
/**
 * leet - leet function
 * @word: parameter
 * Return: string
 */
char *leet(char *word)
{
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char digit[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;
	int n = sizeof(letter) / sizeof(letter[0]);

	for (i = 0; word[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (word[i] == letter[j])
			{
				word[i] = digit[j];
				break;
			}
		}
	}
	return (word);
}
