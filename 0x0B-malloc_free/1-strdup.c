#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function
 * @str: parameter
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	size_t length;
	char *duplicate;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc(length + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
