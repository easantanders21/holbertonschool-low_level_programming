#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @n: var input
 * @a: var input
 *
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
