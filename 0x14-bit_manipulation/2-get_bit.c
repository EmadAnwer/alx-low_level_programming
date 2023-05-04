/*
 * 0x14. C - Bit manipulation
 * task 2
 */
#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: binary number array pointer.
 * @index: binary number array pointer.
 * Return: ndex index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return (n >> index & 1);
}
