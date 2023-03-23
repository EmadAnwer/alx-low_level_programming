#include "main.h"
/*
 * Task 3 in 0x02. C - Functions, nested loops
 * Purpose : numbers, from 0 to 9, followed by a new line.
 * my sulotion: using _putchar and while loops printing numbers one by one
 */


/**
 * print_numbers - numbers, from 0 to 9, followed by a new line.
 * using _putchar function
 *
 * Return: (void)
 */

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n++);
	}
	_putchar('\n');
}
