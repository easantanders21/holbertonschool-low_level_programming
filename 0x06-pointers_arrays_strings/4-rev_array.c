#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements
 *
 *
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
	int *b = &a[n - 1];
	int i = 0;
	int c;

	for (i = 0; i <= n / 2 - 1; i++)
	{
		c = a[i];
		a[i] = b[-i];
		b[-i] = c;
	}

}
