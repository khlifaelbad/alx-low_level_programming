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
/**
 * alloc_grid - func that returns a ptr to a 2D array of ints
 *
 * @width: its number of columns
 * @height: its number of rows
 *
 * Description:
 * - Allocates memory for an array of pointers (rows)
 * - Then allocates memory for each row (columns)
 * - Initializes all elements to 0
 * Return:
 * - Pointer to allocated 2D grid on success
 * - NULL if width or height is invalid or allocation goes fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i; /* represent width (height)*/
	int j; /* represent height (rows)*/

	i = 0;
	j = 0;
	/* check if colmuns (width) or rows (height) is 0 or negative return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocates memory adresse point to pointer each rows*/
	grid = malloc(sizeof(int *) * height);
	/* check adresse memory to allocates that failed*/
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		/* allocates each row interger for (colmuns)  */
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* for check if failed to allocates row free it memory */
			if (i > 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		j = 0; /* reset after finshed colmun of each row*/
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
