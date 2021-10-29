#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - array range
 * @ptr: pointer to char
 * @old_size: old size
 * @new_size: new size
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	free(ptr);

	return (p);
}
