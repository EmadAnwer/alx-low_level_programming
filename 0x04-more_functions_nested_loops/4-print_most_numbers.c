#include "main.h"
/*
 * Task 4 in 0x02. C - Functions, nested loops
 * Purpose : numbers, from 0 to 9, followed by a new line skip 2 4
 * my sulotion: using _putchar and while loops printing numbers one by one
 */


/**
 * print_most_numbers - numbers, from 0 to 9, followed by a new line skip 2 4
 * using _putchar function
 *
 * Return: (void)
 */

void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (!((n == '2') ||  (n == '4')))
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
