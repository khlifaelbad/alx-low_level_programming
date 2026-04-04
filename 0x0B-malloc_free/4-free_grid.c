#include "main.h"
#include <stdlib.h>

/**
 * free_grid - that a func frees a 2D grid previously created by alloc_grid
 *
 * @grid: its array to be free it
 * @height: its represent number of row
 *
 * Return: Nothing to be returned.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
