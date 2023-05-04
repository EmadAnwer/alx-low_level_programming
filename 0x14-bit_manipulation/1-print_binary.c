/*
 * 0x14. C - Bit manipulation
 * task 1
 */
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: binary number array pointer.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
