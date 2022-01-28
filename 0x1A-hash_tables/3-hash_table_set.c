#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - add nodes to table
 * @ht: hash table
 * @key: is a key
 * @value: is the size
 *
 * Return: index value.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strcmp(key, "") < 0)
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] != NULL)
	{
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}

	ht->array[index] = new;
	return (1);
}
