/*
 * 0x0C. C - More malloc, free
 * task 0
 */
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: array size
 * Return: array refrance or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p =  malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
