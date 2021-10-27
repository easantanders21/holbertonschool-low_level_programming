#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free grid
 * @height: height
 * @grid: array grid
 *
 * Return: grid void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
