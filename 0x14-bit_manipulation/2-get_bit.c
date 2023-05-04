/*
 * 0x14. C - Bit manipulation
 * task 1
 */
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: binary number array pointer.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if((index == 0)  && (n == 0))
		return(0);
	if(((n >> index) >= 1))
		return(n >> index & 1);
	return(-1);
}
