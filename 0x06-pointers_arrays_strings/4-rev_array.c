/*
 * 0x06. C - More pointers, arrays and strings
 * task 4
 */
#include "main.h"
/**
 * reverse_array - reverse array elments
 * @n: size of an array
 * @a: array refrance
 */
void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0; i < (n / 2) + (n % 2); i++)
	{
		s = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = s;
	}
}
