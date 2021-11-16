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
	listint_t *tmp, *tmp2;

	if (*head == NULL)
		return;

	tmp2 = *head;
	tmp = tmp2;

	while (tmp2 != NULL)
	{
		tmp2 = tmp2->next;
		free(tmp);
		tmp = tmp2;
	}
	*head = NULL;
}
