#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid from alloc_grid function
 * @grid: the grid we created wiht alloc_grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		++i;
	}

	free(grid);
}
