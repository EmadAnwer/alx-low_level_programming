#include "main.h"
/*
 * Task 7 in 0x04. C - More functions, more nested loops
 * Purpose : print ' ' n time last '\' followed by a new line.
 */


/**
 * print_diagonal - print ' ' n time last '\' followed by a new line.
 * using _putchar function
 * @n: int number
 * Return: (void)
 */

void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{

	int z, i;

	z = 0;
	while (n != z)
	{
		i = 0;
		while (i != z + 1)
		{

			if (i == z)
				_putchar(92);
			else
				_putchar(' ');
			i++;
		}
		z++;
		_putchar('\n');
	}
	}
}
