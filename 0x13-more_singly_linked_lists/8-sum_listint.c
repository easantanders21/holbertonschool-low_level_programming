#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head to the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;

	while (tmp->next != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	sum = sum + tmp->n;
	return (sum);
}
