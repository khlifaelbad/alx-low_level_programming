#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - that a func creates a 2D array (grid) of integers
 *
 * @width: num of colmuns in each row
 * @height: num of row in the grid
 *
 * Description:
 * - Allocates memory for an array of pointers (rows)
 * - Then allocates memory for each row (columns)
 * - Initializes all elements to 0
 *
 * Return:
 * - Pointer to allocated 2D grid on success
 * - NULL if width or height is invalid or allocation goes fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	i = 0;
	/* validate input: width and height must be positive */
	if ((width <= 0) || (height <= 0))
		return (NULL);
	/* alloactes memory of grid each rows (height) points to pointers */
	grid = malloc(sizeof(int *) * height);
	/* check adress memory insuffisante or crashed*/
	if (grid == NULL)
		return (NULL);
	/* Allocate memory for each row and intialize values */
	while (i < height)
	{
		/* Allocate memory for columns (width integers) */
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				free(grid[i - 1]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		/* intialize each element of the row to 0*/
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		/*├── grid[0] → 0x2000 → [0 0 0 0 0 0]*/
		/*├── grid[1] → 0x3000 → [0 0 0 0 0 0]...*/
		i++;
	}
	return (grid);
}
