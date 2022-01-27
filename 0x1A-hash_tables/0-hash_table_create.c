#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - function to create a table
 *
 * @size: table size
 *
 * Return: table or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	if (size < 1)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));

	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	return (new);

}
