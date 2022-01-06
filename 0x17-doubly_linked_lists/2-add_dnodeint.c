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
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (tmp != NULL)
		tmp->prev = new;
	*head = new;
	return (new);
}
