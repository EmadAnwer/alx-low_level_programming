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
	int isNegative = 1;
	int max = 1;
	int i = 1;

	if (n < 0)
	{
		isNegative = -1;
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
	while (n / max != 0)
	{
		max = max * 10;
	}
		max = max / 10;

		if (isNegative == -1)
			_putchar('-');
		while (max != 0)
		{
		i = i * 10;
		_putchar('0' + ((n / max) % i) % 10);
		max = max / 10;

		}
	}

}
