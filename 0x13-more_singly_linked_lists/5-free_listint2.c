#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: pointer to list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
