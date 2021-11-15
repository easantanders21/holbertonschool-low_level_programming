#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head to the list
 * @index: int to return
 *
 * Return: tmp
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;

	while (i < index)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
