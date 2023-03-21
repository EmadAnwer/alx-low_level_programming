#include "main.h"
/*
 * Task 7 in 0x02. C - Functions, nested loops
 * Purpose : prints the last digit of a number.
 * my sulotion: using %10 to get the last number
 */

/**
 * print_last_digit - prints the last digit of a number.
 * @n: int number
 * Return: (n) value of the last digit
 *
 */

int print_last_digit(int n)
{
	/*the last digit*/
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar('0' + n);
	return (n);
}
