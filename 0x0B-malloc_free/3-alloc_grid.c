#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates array og int
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
				grid[i][j] = 0;
		}
	}
	return (grid);
}
