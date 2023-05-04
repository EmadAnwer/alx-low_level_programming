/*
 * 0x14. C - Bit manipulation
 * task 4
 */
#include "main.h"
/*prototypes*/
unsigned long int _pow(int base, int pow);
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: binary number array pointer.
 * @index: binary number array pointer.
 * Return: ndex 1 or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index >= 64)
		return (-1);

	p = _pow(2, index);
	if (*n >> index & 1)
		*n = *n - p;
	return (1);
}
/**
 * _pow - calculate power
 * @base: base
 * @pow: power
 * Return: result
 */
unsigned long int _pow(int base, int pow)
{
	unsigned long int result;

	if (pow == 0)
		return (1);

	if (pow == 1)
		return (base);
	result = base;
	while (--pow)
		result *= base;
	return (result);
}
