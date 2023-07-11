#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a 2 dimensional array of integers
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **coord;
	int i, j;

	coord = malloc(sizeof(*coord) * height);
	if (height <= 0 || width <= 0 || coord == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		coord[i] = malloc(sizeof(**coord) * width);
		if (coord[i] == 0)
		{
			while (i--)
				free(coord[i]);
			free(coord);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			coord[i][j] = 0;
	}
	return (coord);
}
