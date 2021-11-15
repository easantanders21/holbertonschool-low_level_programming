#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: head to the list
 * @n: int to add
 *
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newint, *tmp;

	newint = malloc(sizeof(listint_t));
	if (newint == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	newint->n = n;
	newint->next = NULL;

	if (*head == NULL)
	{
		*head = newint;
	} else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newint;
	}
	return (newint);
}
