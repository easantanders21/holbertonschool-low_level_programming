#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagsums
 * @a: int array square
 * @size: array size
 *
 *
 * Return: void
 */
void print_diagsums(int (*a), int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}
	printf("%d, ", sum1);

	for (i = size - 1; i < size * size - 1; i = i + size - 1)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d\n", sum2);
}
