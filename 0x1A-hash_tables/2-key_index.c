#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 * @key: pointer parameter of key to get index of
 * @size: size of array
 *
 * Return: returns index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
