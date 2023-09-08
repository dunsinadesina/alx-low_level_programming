#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int cpy_size, i;
	void *new_ptr;
	char *source, *dest;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (old_size < new_size)
		cpy_size = old_size;
	else
		cpy_size = new_size;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	source = (char *)ptr;
	dest = (char *)new_ptr;
	for (i = 0; i < cpy_size; i++)
		source[i] = dest[i];
	free(ptr);
	return (new_ptr);
}
