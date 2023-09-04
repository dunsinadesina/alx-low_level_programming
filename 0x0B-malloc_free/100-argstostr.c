#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function
 * @ac: parameter
 * @av: parameter
 *
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	size_t string_length, placement;
	int i, argument_length;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	string_length = 0;
	for (i = 0; i < ac; i++)
	{
		char *argument;

		argument = av[i];
		argument_length = 0;
		while (argument[argument_length] != '\0')
			argument_length++;
		string_length += argument_length + 1;
	}
	concat = (char *)malloc(string_length + 1);
	if (concat == NULL)
		return (NULL);
	placement = 0;
	for (i = 0; i < ac; i++)
	{
		char *argument;

		argument = av[i];
		argument_length = 0;
		while (argument[argument_length] != '\0')
		{
			concat[placement] = argument[argument_length];
			placement++;
			argument_length++;
		}
		concat[placement] = '\n';
		placement++;
	}
	concat[placement] = '\0';
	return (concat);
}
