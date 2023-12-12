#include <stdio.h>
#include <string.h>
/**
 * _strstr - function
 * @haystack: parameter
 * @needle: parameter
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *phaystack = haystack;
		char *pneedle = needle;

		while (*phaystack != '\0' && *pneedle != '\0' && *phaystack == *pneedle)
		{
			phaystack++;
			pneedle++;
		}
		if (*pneedle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
