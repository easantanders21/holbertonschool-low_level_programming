#include "lists.h"
/**
 * add_dnodeint_end - add node to list
 *
 * @head: head to list
 * @n: integer value
 *
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new;
	int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (temp == NULL)
	{
		new->n = 0;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	for ( ; temp->next != NULL; i++)
	{
		temp = temp->next;
	}
	new->n = n;
	temp->next = new;
	new->next = NULL;
	new->prev = temp;
	return (*head);
}
