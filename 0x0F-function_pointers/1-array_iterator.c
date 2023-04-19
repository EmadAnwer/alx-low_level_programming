/*
 * 0x0F. C - Function pointers
 * task 1
 */
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array.
 * @array: array of int
 * @size: size of array
 * @action: funtcion pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size && action && array)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}
