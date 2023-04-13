/*
 * 0x0C. C - More malloc, free
 * task 2
 */
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory using calloc.
 * @nmemb: This is the number of elements
 * @size: This is the size of elements.
 * Return: array refrance or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);
	return (p);
}
