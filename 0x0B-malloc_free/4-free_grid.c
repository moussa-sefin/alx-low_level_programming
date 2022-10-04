#include "main.h"

/**
* free_grid -> removing memory allocation
* @grid: grid to be freed
* @height: height of matrix
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}

