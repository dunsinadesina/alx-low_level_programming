#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: return string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (i);
}
