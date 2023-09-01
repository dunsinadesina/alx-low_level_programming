#include "main.h"
/**
 * _strcat - This concatenates two strings
 * @dest: parameter
 * @src: parameter
 * Return: return string
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
