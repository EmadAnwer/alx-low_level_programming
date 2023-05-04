/*
 * 0x14. C - Bit manipulation
 * task 1
 */
#include "main.h"
/**
 * get_bit - prints the binary representation of a number.
 * @n: binary number array pointer.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if((n >> index) || ((n == 0) && (index == 0)))
		return(n >> index & 1);
	return(-1);
}
