#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - array iterator
 * @array: array
 * @size: array size
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
