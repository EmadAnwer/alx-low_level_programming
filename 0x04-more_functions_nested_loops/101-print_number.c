#include "main.h"
/*
 * Task 10 in 0x04. C - More functions, more nested loops
 * Purpose : prints a triangle, followed by a new line.
 */


/**
 * print_triangle - prints a triangle, followed by a new line.
 * using _putchar function
 * @size: int number
 * Return: (void)
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size - i; k++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
