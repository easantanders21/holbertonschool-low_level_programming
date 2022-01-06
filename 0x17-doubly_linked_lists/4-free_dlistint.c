#include "lists.h"
/**
 * free_dlistint - Free dlist
 * @head: head to list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp1 = head, *temp2 = head;

	while (temp2 != NULL)
	{
		temp2 = temp2->next;
		free(temp1);
		temp1 = temp2;
	}
}
