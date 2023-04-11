/*
 * 0x0B. C - malloc, free
 * task 3
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *alloc_grid - creates an array of chars
 * @width: array width
 * @height: array height
 * Return: 2D int array refrance  or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		/*free every thing*/
		if (grid[i] == NULL)
		{
			while (i != 0)
			{
				free(grid[--i]);
			}
			free(grid);
			return (NULL);
		}

	}
	return (grid);
}
