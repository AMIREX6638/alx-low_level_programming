#include "main.h"
/**
 * free_grid - allocates
 * @grid: takes width
 * @height: taes height
 * Return: Freee grid
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
