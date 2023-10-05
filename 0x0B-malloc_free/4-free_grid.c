#include "main.h"

/**
 *free_grid - function frees a 2 dimensional grid previously created
 *@grid: dimension
 *@height: height of grid
 *Return: void
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
