#include "main.h"
/*
 * Task 6 in 0x02. C - Functions, nested loops
 * Purpose : compute the absolute value of an integer
 * my sulotion: check if n is negative number
 *		change n to positve n * -1 and return n
 */

/**
 * _abs - check sing  of a number
 * @n: number to compute the absolute
 * Return: (|n|) absolute value of an n
 *
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
