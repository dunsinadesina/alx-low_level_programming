#include "main.h"
/**
 * _strcmp - To compare two strings
 * @s1: parameter
 * @s2: parameter
 * Return: 1 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0') && (s2[i] != '\0') ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
