#include "main.h"

/**
 * Description: free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: the grid
 * @height: the height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
