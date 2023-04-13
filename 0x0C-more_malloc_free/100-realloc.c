/*
 * 0x0C. C - More malloc, free
 * task 2
 */
#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: array refrance
 * @old_size: old array size
 * @new_size: new array size
 * Return: array refrance or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = realloc(ptr, new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
