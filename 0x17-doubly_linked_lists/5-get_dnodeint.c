#include "lists.h"

/**
 * get_dnodeint_at_index - Return a node
 *
 * @head: Pointer to list
 * @index: index index of the node to return
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	for (i = 0; head != NULL; i++)
	{
		if (index == i)
		{
			temp = malloc(sizeof(dlistint_t));
			if (temp == NULL)
				return (NULL);
			temp = head;
			return (temp);
		}
		head = head->next;

	}
	return (NULL);
}
