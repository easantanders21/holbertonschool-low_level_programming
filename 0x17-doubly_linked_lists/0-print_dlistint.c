#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Print List
 * @h: head to list
 * Return: size list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for ( ; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
