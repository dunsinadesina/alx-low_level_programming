#include <stdio.h>
#include <string.h>
/**
 * _memcpy - memory copy function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (src != NULL)
		{
			*(dest + i) = *(src + i);
		}
	}
	return (dest);
}
