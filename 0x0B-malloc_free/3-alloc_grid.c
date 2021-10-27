#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - alloc grid
 * @width: width
 * @height: height
 *
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr = malloc(sizeof(long int) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
				arr[i] = NULL;
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
