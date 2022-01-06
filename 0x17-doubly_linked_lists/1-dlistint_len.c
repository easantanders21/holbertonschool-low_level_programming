#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - List length
 * @h: head to list
 * Return: list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for ( ; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
