#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add node to the beginning of the list
 * @head: head to the list
 * @n: int to add
 *
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
		tmp = newint;
		tmp->next = *head;
		*head = newint;
	}
	return (*head);
}
