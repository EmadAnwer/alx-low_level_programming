/*
 * 0x0B. C - malloc, free
 * task 0
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: initialization char for arr
 * Return: array refrance or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	while (size)
		arr[--size] = c;
	return (arr);
}
