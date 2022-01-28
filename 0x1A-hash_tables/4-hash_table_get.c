#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - get value
 *
 * @ht: hash table
 * @key: hash key
 *
 * Return: Value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *puntero;

	index = hash_djb2((unsigned char *)key) % ht->size;

	while (ht->array[index] != NULL)
	{
		puntero = ht->array[index];
		if (strcmp(puntero->key, key) >= 0)
			return (puntero->value);
		puntero = puntero->next;
	}
	return (NULL);
}
