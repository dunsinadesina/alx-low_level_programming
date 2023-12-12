#include <stdio.h>
#include <string.h>
/**
 * _strspn - count function
 * @s: parameter
 * @accept: parameter
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		int found = 0;
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		i++;
		s++;
	}
	return (i);
}
