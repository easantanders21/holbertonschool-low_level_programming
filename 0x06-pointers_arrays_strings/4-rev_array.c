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
	int arr[1000000];
	int i = 0;
	int j = 0;
	int k = 1;

	while (*(a + k))
	{
		k++;
	}

	for (i = 0; i <= n ; i++)
	{
		arr[i] = a[i];
	}

	for (j = 0; j <= n; j++)
	{
		a[j] = arr[n - j - 1];
	}

	k = 0;

	while (*(a + k))
	{
		k++;
	}

}