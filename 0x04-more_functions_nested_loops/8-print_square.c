#include "main.h"
/*
 * Task 8 in 0x04. C - More functions, more nested loops
 * Purpose : Use the character # to print the square
 */


/**
 * print_square - Use the character # to print the square
 * using _putchar function
 * @size: int number
 * Return: (void)
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar('#');
			}
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
