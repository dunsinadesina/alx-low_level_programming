#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: parameter
 * @size: parameter
 * Return: integer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total_memory, i;
	char *character_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_memory = (size_t)nmemb * size;
	ptr = malloc(total_memory);
	if (ptr == NULL)
		return (NULL);
	character_ptr = (char *)ptr;
	for (i = 0; i < total_memory; i++)
	{
		character_ptr[i] = 0;
	}
	return (ptr);
}
