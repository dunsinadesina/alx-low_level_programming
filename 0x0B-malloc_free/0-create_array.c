#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array while using malloc and free
 * @size: paramter
 * @c: parameter
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(*arr) * size);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
