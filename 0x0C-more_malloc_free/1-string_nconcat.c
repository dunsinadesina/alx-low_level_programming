#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function to concatenate
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_strlen, s2_strlen;
	char *pointer;

	s1_strlen = 0;
	s2_strlen = 0;
	for (i = 0; s1[i] != '\0'; i++)
		s1_strlen++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_strlen++;
	pointer = malloc(sizeof(char) * (s1_strlen + n) + 1);
	if (pointer == NULL)
		return (NULL);
	if (n >= s2_strlen)
	{
		for (i = 0; s1[i] != '\0'; i++)
			pointer[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			pointer[s1_strlen + i] = s2[i];
		pointer[s1_strlen + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			pointer[i] = s1[i];
		for (i = 0; i < n; i++)
			pointer[s1_strlen + i] = s2[i];
		pointer[s1_strlen + i] = '\0';
	}
	return (pointer);
}
