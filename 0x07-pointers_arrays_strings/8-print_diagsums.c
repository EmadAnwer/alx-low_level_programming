/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 8
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array refrance
 * @size : int size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int s1, s2;

	 s1 = 0;
	 s2 = 0;

	for (i = 0; i < size; i++)
	{
		s2 += a[(size * (i + 1)) - (i + 1)];
		s1 += a[(size * i) + i];
	}

	printf("%d, %d\n", s1, s2);
}
