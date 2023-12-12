#include <stdio.h>
#include <string.h>
/**
 * _memset - memory set function
 * @s: prototype
 * @b: prototype
 * @n: prototype
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (s != NULL)
		{
			*(s + i) = b;
		}
	}
	return (s);
}
