/*
 * 0x14. C - Bit manipulation
 * task 3
 */
#include "main.h"
/*prototypes*/
unsigned int _pow(int base, int pow);
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: binary number array pointer.
 * @index: binary number array pointer.
 * Return: ndex 1 or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n + _pow(2, index);
	return (1);
}
/**
 * _pow - calculate power
 * @base: base
 * @pow: power
 * Return: result
 */
unsigned int _pow(int base, int pow)
{
	unsigned int result;

	if (pow == 0)
		return (1);

	if (pow == 1)
		return (base);
	result = base;
	while (--pow)
		result *= base;
	return (result);
}
