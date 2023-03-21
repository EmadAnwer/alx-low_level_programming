#include "main.h"
/*
 * Task 5 in 0x02. C - Functions, nested loops
 * Purpose : checks sing  of a number
 * my sulotion: checking the sign by using comparison operators
 */

/**
 * print_sign - check sing  of a number
 * @n: number to check
 * Return: (1) and prints + if n is greater than zero
 *       : (0) and prints 0 if n is zero
 *	: (-1) and prints - if n is less than zero
 *
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('-');
	return (-1);
}
