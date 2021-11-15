#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to list
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *tmp2;
	int n;

	if (*head == NULL)
		return (0);

	tmp2 = *head;
	n = tmp2->n;
	tmp = tmp2;
	tmp2 = tmp2->next;
	*head = tmp2;
	free(tmp);

	return (n);
}
