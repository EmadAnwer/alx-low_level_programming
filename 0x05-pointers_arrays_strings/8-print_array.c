/*
 * 0x05. C - Pointers, arrays and strings
 * task 8
 * Purpose :  prints array of int
 */
#include "main.h"
#include <stdio.h>

/**
 * print_array -   prints array of int
 * @a: int array pointer
 * @n: array size
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
	else
		putchar('\n');

}
