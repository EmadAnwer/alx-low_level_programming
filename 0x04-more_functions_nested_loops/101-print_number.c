#include "main.h"
/*
 * Task 12 in 0x04. C - More functions, more nested loops
 * Purpose : prints an integer.
 */


/**
 * print_number - prints an integer.
 * @n: int number
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
