/*
 * 0x05. C - Pointers, arrays and strings
 * 1. Don't swap horses in crossing a stream
 * Purpose : swaps the values of two integers.
 */
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: intger pointer
 * @b: intger pointer
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
