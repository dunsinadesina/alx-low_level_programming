#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function
 * @b: parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	else
		return (pointer);
}
