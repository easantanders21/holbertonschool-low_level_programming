#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer to list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
