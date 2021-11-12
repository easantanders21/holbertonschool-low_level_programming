#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add node to the beginning of the list
 * @head: head to the list
 * @str: node string
 *
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	int n = strlen(str);
	list_t *newuser, *tmp;

	newuser = malloc(sizeof(list_t));
	if (newuser == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newuser->str = strdup(str);
	newuser->len = n;
	newuser->next = NULL;

	if (*head == NULL)
	{
		*head = newuser;
	} else
	{
		tmp = newuser;
		tmp->next = *head;
		*head = newuser;
	}
	return (*head);
}
