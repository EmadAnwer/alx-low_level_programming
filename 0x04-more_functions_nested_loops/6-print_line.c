#include "main.h"
/*
 * Task 6 in 0x04. C - More functions, more nested loops
 * Purpose : print '_' n time followed by a new line.
 */


/**
 * print_line - print '_' n time followed by a new line.
 * using _putchar function
 * @n: int number
 * Return: (void)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
