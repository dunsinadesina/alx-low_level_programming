#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: parameter
 * @s2: parameter
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t length1, length2, i;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (s2[length2] != '\0')
	{
		length2++;
	}
	concat = (char *)malloc(length1 + length2 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		concat[length1 + i] = s2[i];
	}
	concat[length1 + length2] = '\0';
	return (concat);
}
