/*
 * 0x0B. C - malloc, free
 * task 4
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - creates an array of chars
 * @height: array height
 * @grid: 2D int array refrance  or NULL
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
