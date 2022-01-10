#include "lists.h"
/**
 * sum_dlistint - add all values
 *
 * @head: Pointer to list
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
		return (sum);

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
