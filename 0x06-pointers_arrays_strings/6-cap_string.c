#include "main.h"
/**
 * separators - indicates separators
 * @i: parameter
 * Return: 0 or 1
 */

int separators(char i)
{
	int j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
			'{', '}'};
	int n = sizeof(sep) / sizeof(sep[0]);

	for (j = 0; j < n; j++)
	{
		if (sep[j] == i)
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - capitalizes string
 * @word: parameter
 * Return: character
 */
char *cap_string(char *word)
{
	int capnext = 1;
	int a;

	for (a = 0; word[a] != '\0'; a++)
	{
		if (separators(word[a]))
		{
			capnext = 1;
		}
		else if (capnext && (word[a] >= 'a' && word[a] <= 'z'))
		{
			word[a] = word[a] - 'a' + 'A';
			capnext = 0;
		}
		else
		{
			capnext = 0;
		}
	}
	return (word);
}
