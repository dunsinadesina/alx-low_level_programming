#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * hash_table_create - function to create a hash table
 * @size: parameter for size of array
 *
 * Return: a pointer to hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
