#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function
 * @min: parameter
 * @max: parameter
 * Return: integer
 */
int *array_range(int min, int max)
{
	int array_size, i;
	int *ptr;

	if (min > max)
		return (NULL);
	array_size = max -  min + 1;
	ptr = (int *)malloc(sizeof(int) * array_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < array_size; i++)
		ptr[i] = min + i;
	return (ptr);
}
