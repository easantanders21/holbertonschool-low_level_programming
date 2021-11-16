#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node int at index
 * @head: head to the list
 * @n: int to add
 * @idx: index to nest
 *
 * Return: head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2, *newint;
	unsigned int i = 0;

	tmp = *head;
	newint = malloc(sizeof(listint_t));
	if (newint == NULL)
		return (NULL);
	newint->next = NULL;
	newint->n = n;

	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	tmp2 = tmp->next;
	tmp->next = newint;
	newint->next = tmp2;
	return (newint);
}
