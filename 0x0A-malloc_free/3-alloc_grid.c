#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: size of the integer value array
 * @height: size of the pointer array
 *
 * Return: address to the first pointer in the array of pointers
 * which points to the first value of the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{

	int **grid;
	int i, j;

	grid = malloc(sizeof(int *) * height);

	/* width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* check for NULL malloc */
	if (grid == NULL)
		return (NULL);

	/* check pointer grids for NULL malloc */
	i = 0;
	while (i < height)
	{
		*(grid + i) = malloc(width * sizeof(int));
		if (grid == NULL)
			return (NULL);
		++i;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			++j;
		}
		++i;
	}

	return (grid);
}
