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

	tmp2 = *head;
	*head = NULL;

	while (tmp2->next != NULL)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	free(tmp2);
}
