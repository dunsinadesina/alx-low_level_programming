#include "main.h"
/**
 * _strncpy - copy string
 * @dest: paramater
 * @src: parameter
 * @n: parameter
 * Return: return string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (i);
}
