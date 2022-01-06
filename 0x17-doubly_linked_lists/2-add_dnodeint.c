#include "lists.h"
/**
 * add_dnodeint - add node to list
 *
 * @head: head to list
 * @n: integer value
 *
 * Return: list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new;

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
	new->n = n;
	temp->prev = new;
	new->next = temp;
	new->prev = NULL;
	*head = new;
	return (new);
}
