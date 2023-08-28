#include <stdio.h>
#include <string.h>
/**
 * _strchr - search for character
 * @s: parameter
 * @c: parameter
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *j;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			j = &s[i];
			return (j);
		}
		i++;
	}
	return (NULL);
}
