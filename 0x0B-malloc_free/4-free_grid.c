#include "main.h"

/**
 * free_grid - frees a 2 dimensional array
 * @grid:double pointer to int
 * @height:int
 * Return:noting
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
