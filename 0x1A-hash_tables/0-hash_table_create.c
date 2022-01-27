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

	new = malloc(sizeof(hash_table_t) * size);
	if (new == NULL)
		return (NULL);

	return (new);
}
