#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - count function
 * @s: parameter
 * @accept: parameter
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
