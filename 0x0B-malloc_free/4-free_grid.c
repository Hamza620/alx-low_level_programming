#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: The grid
 * @height: height of the array
 *
 */
void free_grid(int **grid, int height)
{
	int i = height;

	while (i--)
		free(grid[i]);
	free(grid);
}
