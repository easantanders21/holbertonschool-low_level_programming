#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: pointer to function
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i, rtn;

		if (size <= 0)
			return (-1);

		for (i = 0; i <= size; i++)
		{
			rtn = cmp(array[i]);
			if (rtn != 0)
				return (i);
		}

	}

	return (-1);
}
