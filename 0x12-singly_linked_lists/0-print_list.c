#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print a list
 * @h: pointer to list
 *
 * Return: size t
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
                if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] ");
			printf("(nil)\n");
		}

		h = h->next;
		i++;
	}

	return(i);
}
