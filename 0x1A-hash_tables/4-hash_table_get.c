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

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;

	puntero = ht->array[index];

	while (ht->array[index] != NULL)
	{
		if (strcmp(puntero->key, key) == 0)
			return (puntero->value);
		puntero = puntero->next;
	}
	return (NULL);
}
