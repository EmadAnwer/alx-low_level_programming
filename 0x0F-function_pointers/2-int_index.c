/*
 * 0x0F. C - Function pointers
 * task 1
 */
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of int
 * @size: size of array
 * @cmp: funtcion pointer
 * Return: -1 on failed or int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && array)
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
