#include <stdlib.h>

/**
 * free_grid - free memory grid
 * @grid: grid of memories
 * @height: rows
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
