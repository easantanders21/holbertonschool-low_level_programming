#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node int at index
 * @head: head to the list
 * @index: index to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp1, *tmp2;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (1);

	tmp = *head;

	if (index == 0)
	{
		if (tmp == NULL)
			return (-1);
		tmp2 = tmp->next;
		if (tmp2 == NULL)
			return (-1);
		*head = tmp2;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	tmp2 = tmp->next->next;
	tmp1 = tmp->next;
	free(tmp1);
	tmp->next = tmp2;
	return (1);
}
