#include "hash_tables.h"
/**
 * key_index - return key index
 *
 * @key: is a key
 * @size: is the size
 *
 * Return: index value.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;

	hash = hash_djb2(key);
	return (hash % size);
}
