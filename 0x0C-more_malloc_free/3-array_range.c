/*
 * 0x0C. C - More malloc, free
 * task 3
 */
#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: start
 * @max: end
 * Return: from min to max array refrance or NULL
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
