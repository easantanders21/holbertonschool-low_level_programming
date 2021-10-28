#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array range
 * @min: min val
 * @max: max val
 *
 * Return: arr int
 */
int *array_range(int min, int max)
{
	int *ar;
	int j = 0, i;

	if (min > max)

		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));

	if (ar == NULL)

		return (NULL);

	for (i = min; i <= max; i++)
	{
		ar[j] = i;
		j++;
	}
	return (ar);
}
