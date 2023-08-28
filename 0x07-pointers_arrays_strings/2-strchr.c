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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
